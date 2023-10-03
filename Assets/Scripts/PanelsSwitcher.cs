using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PanelsSwitcher : MonoBehaviour
{
    [SerializeField] private GameObject ClosePanel;
    [SerializeField] private GameObject OpenPanel;
    [SerializeField] private GameObject SkinScrollObj;

    public string SceneName;  //MainMenuScene   PlayBallScene
    public bool NeedSwitchScene;
    public bool ShopObj;

    private Animation Anim;

    private void Start()
    {
        Anim = GetComponent<Animation>();
    }

    public void PlayAnim()
    {
        TapSoundController.Instance.PlayTapSound();
        Anim.Play();
    }

    public void GoToPanel()
    {
        if (ShopObj)
        {
            if (SkinScrollObj.activeSelf)
            {
                ShopController.Instance.ExitSkinScroll();
            }
            else
            {
                ClosePanel.SetActive(false);
                OpenPanel.SetActive(true);
            }
        }
        else
        {
            if (!NeedSwitchScene)
            {
                ClosePanel.SetActive(false);
                OpenPanel.SetActive(true);
            }
            else
            {
                SceneTransition.SwitchToScene(SceneName);
            }
        }
    }
}
