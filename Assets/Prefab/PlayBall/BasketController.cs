using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BasketController : MonoBehaviour
{
    private float angle;
    private float DeltaAngle;
    public float AngleSpeed = 20f;

    public GameObject Effect;

    public bool RotateRight;

    public float[] DeltaAngles;  // 1-x 2-y 3-z

    public Vector3 RotationDirection;

    private void Start()
    {
        DeltaAngles = new float[3];
        DeltaAngle = Time.fixedDeltaTime * AngleSpeed;

        CalculateRotateAxis();
    }
    private void FixedUpdate()
    {
        if (RotationDirection != Vector3.zero)
        {
            if (DeltaAngles[1] != 0)
            {
                DeltaAngles[0] = 0;
                DeltaAngles[2] = 0;
            }
            else
            {
                float XAngle = transform.localEulerAngles.x;
                float ZAngle = transform.localEulerAngles.z;

                if ((XAngle < 360 - RotationDirection.x) && (XAngle > RotationDirection.x))
                {
                    DeltaAngles[0] = -DeltaAngles[0];
                }

                if ((ZAngle < 360 - RotationDirection.z) && (ZAngle > RotationDirection.z))
                {
                    DeltaAngles[2] = -DeltaAngles[2];
                }
                //Debug.Log(ZAngle);
            }

            transform.localEulerAngles = new Vector3(transform.localEulerAngles.x + DeltaAngles[0],
            transform.localEulerAngles.y + DeltaAngles[1], transform.localEulerAngles.z + DeltaAngles[2]);
        }
    }

    private void CalculateRotateAxis()
    {

        if (RotationDirection.x != 0)
        {
            DeltaAngles[0] = DeltaAngle;
        }
        if (RotationDirection.y != 0)
        {
            DeltaAngles[1] = DeltaAngle;
            transform.localEulerAngles = RotationDirection;
        }
        if (RotationDirection.z != 0)
        {
            DeltaAngles[2] = DeltaAngle;
        }
    }
}
