using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SettingsController : MonoBehaviour
{
    public GameObject SoundObj;
    private float SoundValue;
    [SerializeField] private Slider _slider;

    private AudioSource SoundSource;

    private void Start()
    {
        SoundSource = SoundObj.GetComponent<AudioSource>();
        SoundValue = GameMenuManager.Instance.playerData.SoundValue;
        _slider.value = SoundValue;
        SoundSource.volume = SoundValue;
    }

    private void FixedUpdate()
    {
        if (_slider.value != SoundValue)
        {
            SoundValue = _slider.value;
            GameMenuManager.Instance.playerData.SoundValue = SoundValue;
            SoundSource.volume = SoundValue;
        }
    }
}
