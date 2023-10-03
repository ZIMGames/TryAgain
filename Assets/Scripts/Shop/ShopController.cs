using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ShopController : MonoBehaviour
{
    public static ShopController Instance;

    private int PreviewObjIndex;
    private int GlobalShopIndex;
    private int SkinIndex;
    private int SkinPrice;
    private int GalkaIndex;
    private int[] PreviosTextureIndex = new int[3];
    private int[] PreviewTexturesLenght = new int[2];

    [SerializeField] private GameObject[] ShopPreviewObj;
    [SerializeField] private GameObject[] ShopTypeObj;
    [SerializeField] private GameObject SkinScrollPrefabObj;
    [SerializeField] private GameObject ShopSkinPrefabObj;
    [SerializeField] private GameObject ConfirmPanObj;

    [SerializeField] private ScrollRect ScrollView;

    private List<GameObject> TempItems = new List<GameObject>();

    private Material[] PreviewMat = new Material[4];

    [SerializeField] private BallsContainerController[] PreviewContainer;

    private PlayerData _playerData;
    private SkinScrollPrefab _skinScrollPrefab;
    private TexturesData _texturesData;
    private ConfirmBuyPanel _confirmBuyPanel;
    private ShopTexData arraydata;

    private void Awake()
    {
        Instance = this;
        _texturesData = GetComponent<TexturesData>();
        _skinScrollPrefab = SkinScrollPrefabObj.GetComponent<SkinScrollPrefab>();
        _confirmBuyPanel = ConfirmPanObj.GetComponent<ConfirmBuyPanel>();
        _playerData = GameMenuManager.Instance.playerData;
        PreviewTexturesLenght[0] = _texturesData._shopTexDataArray[0]._texture.Length;
        PreviewTexturesLenght[1] = _texturesData._shopTexDataArray[1]._texture.Length;
        PreviewObjIndex = 0;
        for (int i = 0; i < ShopPreviewObj.Length; i++)
        {
            PreviewMat[i] = ShopPreviewObj[i].GetComponent<MeshRenderer>().material;
        }
        SetPrewievMat(PreviewObjIndex);
        Invoke("UpdateCounter", 5f);
    }

    public void BuySkin()
    {
        TapSoundController.Instance.PlayTapSound();
        GameMenuManager.Instance.playerData.Money -= SkinPrice;
        arraydata._open[SkinIndex] = true;

        PlayerPrefs.SetInt(arraydata.type.ToString() + "_open" + SkinIndex, 1);

        TempItems[GalkaIndex].GetComponent<ShopSkinPrefabController>().GalkaObj.SetActive(false);
        GalkaIndex = SkinIndex;
        arraydata._itemIndex = SkinIndex;
        PlayerPrefs.SetInt(arraydata.type.ToString() + "_itemIndex", SkinIndex);

        var _temp = TempItems[SkinIndex].GetComponent<ShopSkinPrefabController>();
        _temp.GalkaBackObj.SetActive(true);
        _temp.GalkaObj.SetActive(true);
        _temp.PriceBackGroundObj.SetActive(false);
        _confirmBuyPanel.ExitPanel();
    }

    public void OpenConfPan(int index)
    {
        if (!arraydata._open[index])
        {
            SkinIndex = index;
            SkinPrice = _texturesData._shopTexDataArray[GlobalShopIndex]._price[index];

            if (GameMenuManager.Instance.playerData.Money >= SkinPrice)
            {
                ConfirmPanObj.SetActive(true);
                _confirmBuyPanel.PriceText.text = SkinPrice.ToString();
                _confirmBuyPanel.ShopObj[GlobalShopIndex].SetActive(true);
                _confirmBuyPanel.ShopObj[GlobalShopIndex].GetComponentInChildren<MeshRenderer>().material.SetTexture("_MainTex", arraydata._texture[index]);
            }
            else
            {
                //not enough money
            }
        }
        else
        {
            if (index != GalkaIndex)
            {
                TempItems[GalkaIndex].GetComponent<ShopSkinPrefabController>().GalkaObj.SetActive(false);
                TempItems[index].GetComponent<ShopSkinPrefabController>().GalkaObj.SetActive(true);
                GalkaIndex = index;
                arraydata._itemIndex = index;
                PlayerPrefs.SetInt(arraydata.type.ToString() + "_itemIndex", index);
            }
        }
    }

    public void SpawnShopItemsHelper()
    {
        arraydata = _texturesData._shopTexDataArray[GlobalShopIndex];

        for (int i = 0; i < arraydata._open.Length; i++)
        {
            GameObject _temp = Instantiate(ShopSkinPrefabObj, ScrollView.content) as GameObject;
            var _itemController = _temp.GetComponent<ShopSkinPrefabController>();
            TempItems.Add(_temp);
            _itemController.Index = i;
            _itemController.ItemObj[GlobalShopIndex].SetActive(true);
            _itemController.ItemObj[GlobalShopIndex].GetComponentInChildren<MeshRenderer>().material.SetTexture("_MainTex", arraydata._texture[i]);

            if (arraydata._open[i])
            {
                _itemController.GalkaBackObj.SetActive(true);
                if (i == arraydata._itemIndex)
                {
                    _itemController.GalkaObj.SetActive(true);
                    GalkaIndex = i;
                }
            }
            else
            {
                _itemController.PriceBackGroundObj.SetActive(true);
                _itemController.PriceText.text = arraydata._price[i].ToString();
            }
            _itemController.CallOpenAnim(i);
        }
    }

    public void OpenSkinScroll(int index)
    {
        TapSoundController.Instance.PlayTapSound();
        CancelInvoke("UpdateCounter");
        GlobalShopIndex = index;
        ShopTypeObjActive(false);
        SkinScrollPrefabObj.transform.localPosition = ShopTypeObj[index].transform.localPosition;
        SkinScrollPrefabObj.GetComponent<SkinScrollPrefab>().ItemTypeText.text = _texturesData._shopTexDataArray[index].type.ToString();
        SkinScrollPrefabObj.SetActive(true);
        _skinScrollPrefab.StartMove();
    }

    public void ExitSkinScroll()
    {
        Invoke("UpdateCounter", 2f);

        for (int i = 0; i < TempItems.Count; i++)
        {
            TempItems[i].GetComponent<Animator>().SetTrigger("Close");
            Destroy(TempItems[i], 0.5f);
        }
        TempItems.Clear();
        SkinScrollPrefabObj.GetComponent<Animator>().SetTrigger("Close");
    }

    public void ShopTypeObjActive(bool on)
    {
        for (int i = 0; i < ShopTypeObj.Length; i++)
        {
            ShopTypeObj[i].SetActive(on);
        }
    }

    private void UpdateCounter()
    {
        PreviewObjIndex = 1 - PreviewObjIndex;
        SetPrewievMat(PreviewObjIndex);

        PreviewContainer[0].TimeToRotate = true;
        PreviewContainer[1].TimeToRotate = true;
        PreviewContainer[2].TimeToRotate = true;

        Invoke("UpdateCounter", 5f);
    }

    private void SetPrewievMat(int Index)
    {
        PreviewMat[0 + Index].SetTexture("_MainTex", _texturesData._shopTexDataArray[0]._texture[CalculateTextureIndex(PreviewTexturesLenght[0], 0)]);
        PreviewMat[2 + Index].SetTexture("_MainTex", _texturesData._shopTexDataArray[1]._texture[CalculateTextureIndex(PreviewTexturesLenght[1], 1)]);
    }

    private int CalculateTextureIndex(int lenght, int index)
    {
        int tempindex = Random.Range(0, lenght);

        if (tempindex == PreviosTextureIndex[index])
        {
            for (int i = 0; i < 100; i++)
            {
                tempindex = Random.Range(0, lenght);

                if (tempindex != PreviosTextureIndex[index])
                {
                    break;
                }
            }
        }
        PreviosTextureIndex[index] = tempindex;
        return tempindex;
    }
}
