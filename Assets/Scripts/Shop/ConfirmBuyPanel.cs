using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ConfirmBuyPanel : MonoBehaviour
{
    public GameObject[] ShopObj;

    public Text PriceText;

    public void ExitPanel()
    {
        TapSoundController.Instance.PlayTapSound();
        for (int i = 0; i < ShopObj.Length; i++)
        {
            ShopObj[i].SetActive(false);
        }
        gameObject.SetActive(false);
    }
}
