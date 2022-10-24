using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ScoreCounter : MonoBehaviour
{
    public Text Score;


    void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Ring")
        {
            Destroy(other.gameObject);

            int newScore = Int32.Parse(Score.text) + 100;
            Score.text = newScore.ToString();
        }
    }
}
