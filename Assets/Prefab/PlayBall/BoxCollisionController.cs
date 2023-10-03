using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BoxCollisionController : MonoBehaviour
{
    private PlayBallManager _playBallManager;

    private void Start()
    {
        _playBallManager = FindObjectOfType<PlayBallManager>();
    }
    public void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Ball"))
        {
            _playBallManager.BoxTouchAction();
        }
    }

    public void OnTriggerExit(Collider other)
    {
        if (other.CompareTag("Ball"))
        {
            _playBallManager.BoxTouchAction();
        }
    }
}
