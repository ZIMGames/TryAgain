using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelsManager : MonoBehaviour
{
    public static LevelsManager Instance;

    public int LevelIndex;

    [SerializeField] private GameObject BoxPrefab;
    [SerializeField] private GameObject BasketPrefab;

    public GameObject BasketEffect;

    public LevelsData[] levelsdataarray;

    private void Awake()
    {
        Instance = this;
        StartLevel(GameMenuManager.Instance.LevelToLoad);
    }

    public void StartLevel(int LvlIndex)
    {
        LevelIndex = LvlIndex;

        PlayBallManager.Instance.SpawnBall();

        GameObject _basket = Instantiate(BasketPrefab, levelsdataarray[LvlIndex].BasketPosition.transform) as GameObject;
        _basket.GetComponent<MeshRenderer>().material.SetTexture("_MainTex", GameMenuManager.Instance.PlayTextures[1]);
        BasketController _basketController = _basket.GetComponent<BasketController>();
        BasketEffect = _basketController.Effect;
        _basketController.RotationDirection = levelsdataarray[LvlIndex].BasketRotation;

        if (levelsdataarray[LvlIndex].BoxPositions.Length > 0)
        {
            for (int i = 0; i < levelsdataarray[LvlIndex].BoxPositions.Length; i++)
            {
                GameObject _box = Instantiate(BoxPrefab, levelsdataarray[LvlIndex].BoxPositions[i].transform) as GameObject;
            }
        }
    }

    public void CloseScene()
    {
        SceneTransition.SwitchToScene("MainMenuScene");
    }
}

[System.Serializable]
public class LevelsData                // if index == 0   this is training mode or test mode
{
    public int LevelIndex;

    public Vector3 BasketRotation;

    private int starsComplete;
    public int StarsComplete
    {
        get
        {
            starsComplete = PlayerPrefs.GetInt("StarsComplete" + LevelIndex, 0);
            return starsComplete;
        }
        set
        {
            starsComplete = value;
            PlayerPrefs.SetInt("StarsComplete" + LevelIndex, value);
        }
    }

    public Transform[] BoxPositions;
    public Transform BasketPosition;
}
