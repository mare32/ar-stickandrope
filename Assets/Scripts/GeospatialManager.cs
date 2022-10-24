using Google.XR.ARCoreExtensions;
using System;
using UnityEngine;
using UnityEngine.Android;
using UnityEngine.Events;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

[System.Flags] public enum ErrorState { Null = 0, NoError = 1, Tracking = 2, Message = 4, Camera = 8, Location = 16 }


public class GeospatialManager : MonoBehaviour
{
    /// <summary>
    /// Raised once when all components are ready
    /// </summary>
    [HideInInspector] public UnityEvent InitCompleted;

    // Minimum accuracy required to start experience
    [SerializeField] private float _minimumHorizontalAccuracy = 10;
    [SerializeField] private float _minimumHeadingAccuracy = 15;
    [SerializeField] private float _minimumVerticalAccuracy = 1.5f;

    public ARSessionOrigin SessionOrigin;
    public ARSession Session;
    public ARAnchorManager AnchorManager;
    public AREarthManager EarthManager;
    public ARCoreExtensions ARCoreExtensions;

    public ErrorState CurrentErrorState { get => _errorState; }
    private ErrorState _errorState = ErrorState.NoError;
    
    private string _errorMessage;
    private bool _trackingValid,
                     _initComplete,
                     _requestCamPerm,
                     _requestLocPerm,
                     _startedAR;

    void Start()
    {
        SetErrorState(ErrorState.NoError);
    }

    void Update()
    {
        if (!CheckCameraPermission())
            return;

        if (!CheckLocationPermission())
            return;

        if (!_startedAR)
        {
            SessionOrigin.gameObject.SetActive(true);
            Session.gameObject.SetActive(true);
            ARCoreExtensions.gameObject.SetActive(true);
            _startedAR = true;
        }

        UpdateSessionState();

        if (ARSession.state != ARSessionState.SessionInitializing &&
            ARSession.state != ARSessionState.SessionTracking)
        {
            return;
        }

        switch (EarthManager.IsGeospatialModeSupported(GeospatialMode.Enabled))
        {
            case FeatureSupported.Unknown:
                SetErrorState(ErrorState.Message, "Geospatial API encountered an unknown error.");
                return;
            case FeatureSupported.Unsupported:
                SetErrorState(ErrorState.Message, "Geospatial API is not supported by this device.");
                enabled = false;
                return;
            case FeatureSupported.Supported:
                if (ARCoreExtensions.ARCoreExtensionsConfig.GeospatialMode == GeospatialMode.Disabled)
                {
                    Debug.Log("Enabling Geospatial Mode...");
                    ARCoreExtensions.ARCoreExtensionsConfig.GeospatialMode =
                        GeospatialMode.Enabled;
                    //_enablingGeospatial = true;
                    return;
                }
                break;
        }

        /// Check earth state
        if (EarthManager.EarthState != EarthState.Enabled)
        {
            SetErrorState(ErrorState.Message, "Error: Unable to start Geospatial AR");
            enabled = false;
            return;
        }

        bool isSessionReady = ARSession.state == ARSessionState.SessionTracking;

        /// **** Init Complete ****
        if (!_initComplete)
        {
            InitCompleted.Invoke();
            _initComplete = true;
            SetErrorState(ErrorState.Tracking);
        }
        /*
        if (!TrackingIsValid())
        {
            return;
        }
        */
    }

    /// <summary>
    ///  Props user to allow location services
    /// </summary>
    private bool CheckLocationPermission()
    {
        if (!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
        {
            if (_errorState != ErrorState.Location)
                SetErrorState(ErrorState.Location);

            if (!_requestLocPerm) Permission.RequestUserPermission(Permission.FineLocation);
            _requestLocPerm = true;
            return false;
        }

        if (_errorState == ErrorState.Location)
            SetErrorState(ErrorState.NoError);

        return true;
    }

    /// <summary>
    /// Props user to allow camera services
    /// </summary>
    private bool CheckCameraPermission()
    {
        if (!Permission.HasUserAuthorizedPermission(Permission.Camera))
        {
            if (_errorState != ErrorState.Camera)
                SetErrorState(ErrorState.Camera);


            if (!_requestCamPerm) Permission.RequestUserPermission(Permission.Camera);
            _requestCamPerm = true;
            return false;
        }

        if (_errorState == ErrorState.Camera)
            SetErrorState(ErrorState.NoError);

        return true;
    }

    /// <summary>
    /// Updates error state which can be null, no error, tracking, message, camera, location
    /// </summary>
    /// <param name="errorState"></param>
    /// <param name="message"></param>
    private void SetErrorState(ErrorState errorState, string message = null)
    {
        if (_errorState != errorState)
        {
            _errorState = errorState;
            // ErrorStateChanged.Invoke(_errorState, message);
        }
    }

    /// <summary>
    /// Monitor the state of AR session
    /// </summary>
    private void UpdateSessionState()
    {
        /// Pressing 'back' button quits the app.
        if (Input.GetKeyUp(KeyCode.Escape))
        {
            Application.Quit();
        }

        /// Only allow the screen to sleep when not tracking.
        var sleepTimeout = SleepTimeout.NeverSleep;
        if (ARSession.state != ARSessionState.SessionTracking)
        {
            sleepTimeout = SleepTimeout.SystemSetting;
        }

        Screen.sleepTimeout = sleepTimeout;

        /// ARSession Status
        if (ARSession.state != ARSessionState.CheckingAvailability &&
            ARSession.state != ARSessionState.Ready &&
            ARSession.state != ARSessionState.SessionInitializing &&
            ARSession.state != ARSessionState.SessionTracking)
        {
            Debug.Log("ARSession error state: " + ARSession.state);
            SetErrorState(ErrorState.Message, "AR Error Encountered: " + ARSession.state);
            enabled = false;
        }

        else if (SessionOrigin == null || Session == null || ARCoreExtensions == null)
        {
            Debug.Log("Missing AR Components.");
            SetErrorState(ErrorState.Message, "Error: Something Went Wrong");
            return;
        }
    }

    private bool TrackingIsValid()
    {
        bool valid = false;

        if (!valid && EarthManager.EarthTrackingState == TrackingState.Tracking)
        {
            /// Have we met the minimums?
            valid = EarthManager.CameraGeospatialPose.HeadingAccuracy <= _minimumHeadingAccuracy &&
                    EarthManager.CameraGeospatialPose.VerticalAccuracy <= _minimumVerticalAccuracy &&
                    EarthManager.CameraGeospatialPose.HorizontalAccuracy <= _minimumHorizontalAccuracy;
        }

        if (valid != _trackingValid)
        {
            _trackingValid = valid;
            SetErrorState(_trackingValid ? ErrorState.NoError : ErrorState.Tracking);
        }

        return valid;
    }
}
