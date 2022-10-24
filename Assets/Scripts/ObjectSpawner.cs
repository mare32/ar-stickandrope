using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectSpawner : MonoBehaviour
{
    public GameObject objToSpawn;
    PlacementIndicator placementIndicator;
    [SerializeField] float spawnDelay = 2f;


    private void Start()
    {
        placementIndicator = FindObjectOfType<PlacementIndicator>();
        StartCoroutine(SpawnObjects());
    }
    private void Update()
    {
        if (Input.touchCount > 0 /*&& Input.touches[0].phase == TouchPhase.Began*/)
        {
            placementIndicator.gameObject.SetActive( false );
            GameObject obj = Instantiate(objToSpawn, placementIndicator.transform.position, placementIndicator.transform.rotation);
        }
    }

    IEnumerator SpawnObjects()
    {
        // instantiate in some radius around the indicator
        float xPosition, yPosition, zPosition;
        xPosition = placementIndicator.transform.position.x + Random.Range(-.5f,.5f);
        yPosition = placementIndicator.transform.position.y + Random.Range(-.5f,.5f);
        zPosition = placementIndicator.transform.position.z;
        Instantiate(objToSpawn, new Vector3(xPosition,yPosition,zPosition), Quaternion.identity);
        yield return new WaitForSeconds(spawnDelay);
        StartCoroutine(SpawnObjects());
    }
}

        //Touch firstTouch = Input.GetTouch(0);
        //if (firstTouch.phase == TouchPhase.Began)
        //{
        //    // The touch started this is equal to a MouseDown
        //    GameObject obj = Instantiate(objToSpawn, placementIndicator.transform.position,placementIndicator.transform.rotation);
        //}