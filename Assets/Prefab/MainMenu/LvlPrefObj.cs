using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LvlPrefObj : MonoBehaviour
{
    public int LevelIndex;
    public bool CanPlay;
    public Image Border;

    public GameObject[] Stars;
    public GameObject StarsContainer;
    public GameObject Lock;
    public GameObject Leveltxt;

    private Animator ComponentAnimator;

    private void Start()
    {
        ComponentAnimator = GetComponent<Animator>();
    }

    public void PlayAnim()
    {
        TapSoundController.Instance.PlayTapSound();
        ComponentAnimator.SetTrigger("On");
    }
    public void StartLevel()
    {
        if (CanPlay)
        {
            GameMenuManager.Instance.OpenGameScene(LevelIndex);
        }
    }
}
