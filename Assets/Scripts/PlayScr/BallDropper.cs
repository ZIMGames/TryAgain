using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BallDropper : MonoBehaviour
{
    public static event DropBall ThrowEvent;
    public delegate void DropBall();

    public float Sensivity;
    public Vector3 Direction;

    public float Acceleration;          //for x from 60 to -60            for Touches is 600 and -600        inversion to XAxes
    //for y axes maks touch 2k   for y maks is from 4 to 20
    private Rigidbody rb;

    public bool Droped;
    public bool TimeToCheckVelocity;

    private bool FirstFloorTouch;

    private ParticleSystem particles;
    public PhysicMaterial BallPhysMat;

    private PlayBallManager _playBallManager;

    private void Start()
    {
        _playBallManager = FindObjectOfType<PlayBallManager>();
        particles = gameObject.GetComponentInChildren<ParticleSystem>();
        FirstFloorTouch = false;
        BallPhysMat.bounciness = 0;
        rb = GetComponent<Rigidbody>();

        SwipeDetection.SwipeEvent += OnSwipe;
    }

    private void OnDestroy()
    {
        SwipeDetection.SwipeEvent -= OnSwipe;
    }
    private void FixedUpdate()
    {
        if (Droped && TimeToCheckVelocity)
        {
            TimeToCheckVelocity = false;

            if ( Mathf.Abs(rb.velocity.y) < 1 )   //(rb.velocity.x < 5 && rb.velocity.z < 5 && rb.velocity.y < 5)
            {
                PlayBallManager.Instance.UpdateStatusText("LoseVelocity");
            }
            else
            {
                Invoke("SetCheckVelocity", 4f);
            }
        }
    }

    private void OnSwipe(Vector2 direction)
    {
        if (ThrowEvent != null)
        {
            ThrowEvent();
        }

        if (!Droped)
        {
            if (particles == null)
            {
                particles = gameObject.GetComponentInChildren<ParticleSystem>();
            }
            //particles.Play();

            Acceleration = direction.y / 650 * Sensivity;
            Direction.x = direction.x / 10 * Sensivity;      //was 10
            BallPhysMat.bounciness = 0.75f;
            rb.AddForce(Direction * Acceleration, ForceMode.Impulse);
            Droped = true;
            Invoke("SetCheckVelocity", 7f);
        }
    }

    public void OnTriggerEnter(Collider other)
    {
        if ((!other.CompareTag("Table")) && (!other.CompareTag("Room")))
        {
            _playBallManager.PlaySound();
        }
        if (other.CompareTag("Box"))
        {
            _playBallManager.BoxTouchAction();
        }

        if (other.CompareTag("FloorTag"))
        {
            if (!FirstFloorTouch)
            {
                FirstFloorTouch = true;
            }
            else
            {
                PlayBallManager.Instance.UpdateStatusText("LoseFloor");
            }
        }
        else if (other.CompareTag("Win"))
        {
            PlayBallManager.Instance.UpdateStatusText("Win");
        }
    }

    public void OnTriggerExit(Collider other)
    {
        if (other.CompareTag("Room"))
        {
            PlayBallManager.Instance.UpdateStatusText("Lose");
        }

        if (other.CompareTag("Box"))
        {
            _playBallManager.BoxTouchAction();
        }
    }

    private void SetCheckVelocity()
    {
        Debug.Log("SetCheckVelocity");
        TimeToCheckVelocity = true;
    }
}
