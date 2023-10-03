using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TexturesData : MonoBehaviour
{
    public ShopTexData[] _shopTexDataArray;

    private void Start()
    {
        LoadTexturesStatus();
    }

    public void LoadTexturesStatus()
    {
        for (int i = 0; i < 2; i++)
        {
            for (int x = 0; x < _shopTexDataArray[i]._open.Length; x++)
            {
                if (PlayerPrefs.GetInt(_shopTexDataArray[i].type.ToString() + "_open" + x, 0) == 1)
                {
                    _shopTexDataArray[i]._open[x] = true;
                }
                else
                {
                    _shopTexDataArray[i]._open[x] = false;
                }
            }
        }
        _shopTexDataArray[0]._open[0] = true;
        _shopTexDataArray[1]._open[0] = true;

        _shopTexDataArray[0]._itemIndex = PlayerPrefs.GetInt(_shopTexDataArray[0].type.ToString() + "_itemIndex", 0);
        _shopTexDataArray[1]._itemIndex = PlayerPrefs.GetInt(_shopTexDataArray[1].type.ToString() + "_itemIndex", 0);
    }
}

public enum ShopItemType { Ball = 0, Basket, Effect}

[System.Serializable]
public class ShopTexData
{
    public ShopItemType type;

    public Texture[] _texture;
    public GameObject[] _effect;

    public bool[] _open;
    public int[] _price;
    public int _itemIndex;
}
