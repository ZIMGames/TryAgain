using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SliderController : MonoBehaviour
{
    private float SensValue;
    [SerializeField] private Text SensivityText;
    [SerializeField] private Slider slider;
    [SerializeField] private GameObject SwipeDetector;

    private PlayBallManager _playBallManager;

    private void Start()
    {
        _playBallManager = FindObjectOfType<PlayBallManager>();
        SensValue = _playBallManager.Sensivity;
        SensivityText.text = SensValue.ToString();
        slider.value = SensValue;
    }

    private void FixedUpdate()
    {
        if (slider.value != SensValue)
        {
            SensValue = Mathf.Round(slider.value * 100.0f) * 0.01f;
            SensivityText.text = SensValue.ToString();
            _playBallManager.Sensivity = SensValue;

            if (_playBallManager.BallTemp != null)
            {
                _playBallManager.BallTemp.GetComponent<BallDropper>().Sensivity = SensValue;
            }
        }
    }

    public void ExitSetPanel()
    {
        TapSoundController.Instance.PlayTapSound();
        gameObject.SetActive(false);
        SwipeDetector.SetActive(true);
    }
}
