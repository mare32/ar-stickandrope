using Google.XR.ARCoreExtensions;
using System;
using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.XR.OpenXR.Input;

public class RingSpawner : MonoBehaviour
{
    public AREarthManager EarthManager;
    public ARAnchorManager AnchorManager;
    public GameObject newPrefab;
    private bool isPlaced = false;
    [SerializeField] private float _minimumHorizontalAccuracy = 1;
    [SerializeField] private float _minimumHeadingAccuracy = 2;
    [SerializeField] private float _minimumVerticalAccuracy = 0.5f;

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

        return valid;
    }

    // Update is called once per frame
    void LateUpdate()
    {
        if (!isPlaced && TrackingIsValid())
        {

            GeospatialPose pose = EarthManager.CameraGeospatialPose;
            Quaternion quaternion = Quaternion.AngleAxis(180f - (float)pose.Heading, Vector3.up);

            var anchor1 =
                    AnchorManager.AddAnchor(
                       45.243478f,
                       19.842043f,
                       124.5f,
                       quaternion);
            var anchoredAsset1 = Instantiate(newPrefab, anchor1.transform);


            var anchor2 =
                    AnchorManager.AddAnchor(
                       45.243533f,
                       19.842017f,
                       124.5f,
                       quaternion);
            var anchoredAsset2 = Instantiate(newPrefab, anchor2.transform);


            var anchor3 =
                    AnchorManager.AddAnchor(
                       45.243595f,
                       19.841983f,
                       124.5f,
                       quaternion);
            var anchoredAsset3 = Instantiate(newPrefab, anchor3.transform);


            var anchor4 =
                    AnchorManager.AddAnchor(
                       45.243640f,
                       19.841926f,
                       124.5f,
                       quaternion);
            var anchoredAsset4 = Instantiate(newPrefab, anchor4.transform);


            var anchor5 =
                    AnchorManager.AddAnchor(
                       45.243706f,
                       19.841921f,
                       124.5f,
                       quaternion);
            var anchoredAsset5 = Instantiate(newPrefab, anchor5.transform);

            StartCoroutine(ActivateRing(anchoredAsset1));
            StartCoroutine(ActivateRing(anchoredAsset2));
            StartCoroutine(ActivateRing(anchoredAsset3));
            StartCoroutine(ActivateRing(anchoredAsset4));
            StartCoroutine(ActivateRing(anchoredAsset5));
            isPlaced = true;
        }
        /*
        if (!isPlaced)
        {
            Quaternion quaternion = Quaternion.AngleAxis(0f, Vector3.up);
            var anchoredAsset5 = Instantiate(newPrefab, new Vector3(0,0,1), quaternion);
            StartCoroutine(ActivateRing(anchoredAsset5));
            isPlaced = true;
        }
        */
    }

    private IEnumerator ActivateRing(GameObject anchoredAsset)
    {
        yield return new WaitForSeconds(0.2f);
        anchoredAsset.SetActive(true);
    }
}
