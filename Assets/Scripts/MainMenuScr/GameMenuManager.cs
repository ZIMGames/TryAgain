using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameMenuManager : MonoBehaviour
{
    public static GameMenuManager Instance;

    public Texture[] PlayTextures;

    [SerializeField] private GameObject Money;
    [SerializeField] private GameObject PlayPanObj;
    [SerializeField] private Image TrophyRewardImage;
    [SerializeField] private Text StarsCount;
    [SerializeField] private Text ShopMoneyText;
    [SerializeField] private Color[] StatusColor;

    public int LevelToLoad;
    private bool CanClaimTrophyReward;

    public PlayerData playerData;
    public TexturesData _texturesData;

    private void Awake()
    {
        Instance = this;
        DeleteSavedData.SetCompeletedLevels(30, 3);
        playerData.Money = 1000;
        _texturesData.LoadTexturesStatus();
    }

    public void CheckTrophyRewards()
    {
        int TotalStars = 0;
        List<int> LevelsStars = DeleteSavedData.GetLevelStarsCompleted();

        for (int i = 0; i < LevelsStars.Count; i++)
        {
            TotalStars += LevelsStars[i];
        }

        TotalStars -= playerData.TrophyRewardsCollected * 15;
        StarsCount.text = (TotalStars.ToString() + "/15");
        if (TotalStars >= 15)
        {
            TrophyRewardImage.color = StatusColor[0];
            CanClaimTrophyReward = true;
        }
        else
        {
            TrophyRewardImage.color = StatusColor[1];
            CanClaimTrophyReward = false;
        }
    }

    public void CollectTrophyReward()
    {
        TapSoundController.Instance.PlayTapSound();
        if (CanClaimTrophyReward)
        {
            playerData.TrophyRewardsCollected += 1;
            playerData.Money += 25;
            GameObject temp = Instantiate(Money, PlayPanObj.transform) as GameObject;
            Destroy(temp, 1f);
            CheckTrophyRewards();
        }
    }

    public void OpenGameScene(int LvlToLoad)
    {
        LoadTexturesForPlay();
        LevelToLoad = LvlToLoad;
        SceneTransition.SwitchToScene("PlayBallScene");
    }

    public void UpdateMoneyCount(int value)
    {
        if (ShopMoneyText != null)
        {
            ShopMoneyText.text = value.ToString();
        }
    }

    private void LoadTexturesForPlay()
    {
        int itIndex = _texturesData._shopTexDataArray[0]._itemIndex;
        PlayTextures[0] = _texturesData._shopTexDataArray[0]._texture[itIndex];
        PlayTextures[1] = _texturesData._shopTexDataArray[1]._texture[_texturesData._shopTexDataArray[1]._itemIndex];
    }
}

[System.Serializable]
public class PlayerData
{
    private string name;
    public string Name
    {
        get
        {
            return name;
        }
        set
        {
            name = value;
        }
    }

    public int Money
    {
        get
        {
            return PlayerPrefs.GetInt("Money", 0);
        }
        set
        {
            PlayerPrefs.SetInt("Money", value);
            GameMenuManager.Instance.UpdateMoneyCount(value);
        }
    }

    public float SoundValue
    {
        get
        {
            return PlayerPrefs.GetFloat("SoundValue", 1);
        }
        set
        {
            PlayerPrefs.SetFloat("SoundValue", value);
        }
    }

    public int TrophyRewardsCollected
    {
        get
        {
            return PlayerPrefs.GetInt("TrophyRewardsCollected", 0);
        }
        set
        {
            PlayerPrefs.SetInt("TrophyRewardsCollected", value);
        }
    }
}
