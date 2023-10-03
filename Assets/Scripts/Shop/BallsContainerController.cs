using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BallsContainerController : MonoBehaviour
{
    private float angle = 0;
    private float MaxRotAngle = 180;
    private float angleSpeed = 300f;
    public bool TimeToRotate;

    private void FixedUpdate()
    {
        if (TimeToRotate)
        {
            angle += Time.fixedDeltaTime * angleSpeed;
            transform.localEulerAngles = new Vector3(0, angle, 0);
            
            if (angle > MaxRotAngle)
            {
                if (angle > 40)
                {
                    angle = -180;
                    MaxRotAngle = 0;
                }
                else
                {
                    angle = 0;
                    MaxRotAngle = 180;
                }
                transform.localEulerAngles = new Vector3(0, angle, 0);
                TimeToRotate = false;
            }
        } 
    }
}
