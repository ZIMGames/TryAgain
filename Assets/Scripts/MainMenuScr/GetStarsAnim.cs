using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GetStarsAnim : MonoBehaviour
{
    public ParticleSystem[] SmallStarsEffects;

    public Text LevelTxt;
    public Text EndStatusText;

    public GameObject Star2;
    public GameObject Star3;
    public GameObject RewardTextDouble;
    private AudioSource StarsSound;

    private bool CanSwitchScene;

    private void Start()
    {
        StarsSound = GetComponent<AudioSource>();
        StarsSound.volume = GameMenuManager.Instance.playerData.SoundValue;
        CanSwitchScene = true;
    }

    public void PlayAnim1()
    {
        StarsSound.Play();
        SmallStarsEffects[0].Play();
    }

    public void PlayAnim2()
    {
        if (Star2.activeSelf)
        {
            StarsSound.Play();
        }
        SmallStarsEffects[1].Play();
    }

    public void PlayAnim3()
    {
        if (Star3.activeSelf)
        {
            StarsSound.Play();
        }
        SmallStarsEffects[2].Play();
    }

    public void LoadNewLvl()
    {
        TapSoundController.Instance.PlayTapSound();
        if (CanSwitchScene)
        {
            CanSwitchScene = false;
            int LevelNow = LevelsManager.Instance.LevelIndex;
            if (LevelNow == LevelsManager.Instance.levelsdataarray.Length - 1)
            {
                SceneTransition.SwitchToScene("MainMenuScene");
            }
            else
            {
                GameMenuManager.Instance.OpenGameScene(LevelNow + 1);
            }
        }
        gameObject.SetActive(false);
    }
}
