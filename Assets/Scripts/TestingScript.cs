using JetBrains.Annotations;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TestingScript : MonoBehaviour
{
    private int a = 5;
    private int b = 10;
    bool looping;
    private void Start()
    {
        print(a);
        print(b);
        int c = 1;
        int d = 3;
        SetValuesWithRefKeyword(ref a, ref b, c, d);

    }
    private void Update()
    {
        if(looping)
        {
            looping = false;
            print(a);
            print(b);
        }
    }
    public void SetValuesWithRefKeyword(ref int a, ref int b, int c, int d) // test this first
    {
        a = c;
        b = d;
        looping = true;
    }
    // touches not working on Xiaomi 9 SE
    // Interact with walking ( changing the position of AR Origin )
    // or
    // Interact by aiming at a specific spot ( for a specific time duration? or something else )
    // with a raycast?
    // any other means of interaction?
}
