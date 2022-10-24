using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIManager : MonoBehaviour
{
    public Text PointScoredMessage;
    public Vector3 prevPosition;
    bool msgIsShowing;
    [SerializeField]
    float dst = 2;

    public void SetValuesOfPlayerPositionOnCollect(Vector3 newPos)
    {
        this.prevPosition = newPos;
        msgIsShowing = true;
    }
    IEnumerator CheckIfTraveledEnoughDistance()
    {
        if (Vector3.Distance(transform.position, prevPosition) > dst)
        {
            PointScoredMessage.gameObject.SetActive(false);
            msgIsShowing = false;
        }
        yield return new WaitForSeconds(1);
        if (msgIsShowing)
            StartCoroutine(CheckIfTraveledEnoughDistance());
    }
}
