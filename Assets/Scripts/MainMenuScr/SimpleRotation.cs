using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SimpleRotation : MonoBehaviour
{
    private float angle = 0;
    private float angleSpeed = 25f;
    public float StartXPos;
    public bool ShopObj;
    void FixedUpdate()
    {
        angle += Time.fixedDeltaTime * angleSpeed;
        if (ShopObj)
        {
            transform.localEulerAngles = new Vector3(StartXPos, angle, 0);
        }
        else
        {
            transform.localEulerAngles = new Vector3(0, 0, angle);
        }
    }
}
