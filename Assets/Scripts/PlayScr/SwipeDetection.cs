using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SwipeDetection : MonoBehaviour
{
    public static event OnSwipeInput SwipeEvent;
    public delegate void OnSwipeInput(Vector2 direction);

    private Vector2 TapPosition;
    private Vector2 SwipeDelta;

    private float DeadZone = 300;

    private bool IsSwiping;
    private bool IsMobile;
    private bool CallDelegate;


    private void Start()
    {
        IsMobile = Application.isMobilePlatform;
    }


    void Update()
    {
        if (!IsMobile)
        {
            if (Input.GetMouseButtonDown(0))
            {
                SwipeDelta = Vector2.zero;
                IsSwiping = true;
                TapPosition = Input.mousePosition;
            }
            else if (Input.GetMouseButtonUp(0))
            {
                IsSwiping = false;
                CallDelegate = true;
            }
        }
        else
        {
            if (Input.touchCount > 0)
            {
                if (Input.GetTouch(0).phase == TouchPhase.Began)
                {
                    SwipeDelta = Vector2.zero;
                    IsSwiping = true;
                    TapPosition = Input.GetTouch(0).position;
                }
                else if (Input.GetTouch(0).phase == TouchPhase.Canceled || Input.GetTouch(0).phase == TouchPhase.Ended)
                {
                    IsSwiping = false;
                    CallDelegate = true;
                }
            }
        }

        CheckSwipe();
    }

    private void CheckSwipe()
    {
        if (IsSwiping)
        {
            if (!IsMobile)
            {
                SwipeDelta = (Vector2)Input.mousePosition - TapPosition;
            }
            else
            {
                SwipeDelta = Input.GetTouch(0).position - TapPosition;
            }
        }
        else if (CallDelegate)     //endswipe    call delegate
        {
            CallDelegate = false;

            if (SwipeDelta.magnitude >= DeadZone)
            {
                if (SwipeEvent != null)
                {
                    Ad.Instance.ShowInterstitial();
                    SwipeEvent(SwipeDelta);
                }
            }
            else
            {
                Debug.Log("DeadZone");
            }

            ResetSwipe();
        }
    }

    private void ResetSwipe()
    {
        IsSwiping = false;

        TapPosition = Vector2.zero;
        SwipeDelta = Vector2.zero;
    }
}
