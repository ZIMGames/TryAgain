using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TapSoundController : MonoBehaviour
{
    public static TapSoundController Instance;
    private AudioSource TapSound;

    private void Start()
    {
        Instance = this;
        DontDestroyOnLoad(this);
        TapSound = GetComponent<AudioSource>();
    }

    public void PlayTapSound()
    {
        TapSound.Play();
    }
}
