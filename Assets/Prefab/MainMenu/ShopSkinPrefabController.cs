using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ShopSkinPrefabController : MonoBehaviour
{
    public int Index;

    private float AnimDelay = 0.4f;
    private Animator _animator;

    public Text PriceText;

    public GameObject PriceBackGroundObj;
    public GameObject GalkaBackObj;
    public GameObject GalkaObj;
    public GameObject[] ItemObj;

    private void Start()
    {
        _animator = GetComponent<Animator>();
    }
    public void CallOpenAnim(int index)
    {
        Invoke("PlayAnim", AnimDelay * index);
    }

    public void Buy()
    {
        TapSoundController.Instance.PlayTapSound();
        ShopController.Instance.OpenConfPan(Index);
    }

    public void MarkAsGameVariant()
    {

    }

    private void PlayAnim()
    {
        _animator.SetTrigger("Open");
    }
}
