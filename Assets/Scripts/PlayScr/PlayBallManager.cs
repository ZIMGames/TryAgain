using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayBallManager : MonoBehaviour
{
    public static PlayBallManager Instance;

    private bool BoxDoubleTouch;

    private int DropsCount;
    private int GameLevel;
    private int BoxTouches;
    private int BoxTouchesNeed;

    public float Sensivity
    {
        get
        {
            return PlayerPrefs.GetFloat("Sensivity", 1);
        }
        set
        {
            PlayerPrefs.SetFloat("Sensivity", value);
        }
    }

    [SerializeField] private Text GameStatusText;
    public Text RewardText;

    [SerializeField] private GameObject BallPrefab;
    [SerializeField] private GameObject RoomParentObj;

    [SerializeField] private GameObject EndRoundPanelObj;
    [SerializeField] private GameObject BallTrailEffect;
    [SerializeField] private GameObject[] BallSoundObj;
    [SerializeField] private GameObject WinSoundObj;
    private AudioSource[] BallSound = new AudioSource[2];
    private AudioSource WinSound;

    public GameObject BallTemp;

    [SerializeField] private Image FillGreen;
    [SerializeField] private Image FillOrange;
    [SerializeField] private Image FillRed;

    [SerializeField] private Transform StartBallPos;

    private GetStarsAnim _getStarsAnim;
    private LevelsManager _levelsManager;


    private void Awake()
    {
        Instance = this;
        float volume = GameMenuManager.Instance.playerData.SoundValue;
        BoxDoubleTouch = false;
        GetGameEffects();
        BallDropper.ThrowEvent += UpdateFill;
        for (int i = 0; i < BallSoundObj.Length; i++)
        {
            BallSound[i] = BallSoundObj[i].GetComponent<AudioSource>();
            BallSound[i].volume = volume;
        }
        WinSound = WinSoundObj.GetComponent<AudioSource>();
        WinSound.volume = volume;
        _getStarsAnim = EndRoundPanelObj.GetComponent<GetStarsAnim>();
        _levelsManager = FindObjectOfType<LevelsManager>();
        GameLevel = GameMenuManager.Instance.LevelToLoad;
        BoxTouchesNeed = _levelsManager.levelsdataarray[GameLevel].BoxPositions.Length;
    }

    private void GetGameEffects()
    {
        //int BallEffectIndex = GameMenuManager.Instance.playerData.BallTrailEffectIndex;
        //BallTrailEffect = GameMenuManager.Instance.playerData.BallTrailEffects[BallEffectIndex];
    }

    public void SpawnBall()
    {
        if (BallTemp == null)
        {
            BoxDoubleTouch = false;
            BoxTouches = 0; 
            GameObject ball = Instantiate(BallPrefab, RoomParentObj.transform) as GameObject;
            BallTemp = ball;
            ball.GetComponent<BallDropper>().Sensivity = Sensivity;
            ball.transform.position = StartBallPos.position;
            ball.GetComponent<MeshRenderer>().material.SetTexture("_MainTex", GameMenuManager.Instance.PlayTextures[0]);
            //GameObject ballEffect = Instantiate(BallTrailEffect, ball.transform) as GameObject;
        }
        else
        {
            Debug.Log("TryZadvoit'");
        }
    }

    public void PlaySound()
    {
        BallSound[Random.Range(0, BallSoundObj.Length)].Play();
    }

    public void BoxTouchAction()
    {
        if (!BoxDoubleTouch)
        {
            BoxTouches += 1;
            BoxDoubleTouch = true;
            Invoke("BoxTouchTimeController", 0.1f);
        }
    }

    private void BoxTouchTimeController()
    {
        BoxDoubleTouch = false;
    }

    private void UpdateFill()
    {
        ++DropsCount;
        float fill;

        if (DropsCount <= 15)
        {
            fill = (float)DropsCount / 15;
            FillGreen.fillAmount = fill;
        }
        else if ((DropsCount > 15) && (DropsCount <= 25))
        {
            fill = (float)(DropsCount - 15) / 10;
            FillOrange.fillAmount = fill;
            _getStarsAnim.Star3.SetActive(false);
        }
        else
        {
            _getStarsAnim.Star2.SetActive(false);
            FillRed.fillAmount = 1;
        }
    }

    public void DoubleReward()
    {
        Ad.Instance.ShowRewarded();
    }

    public void Win()
    {
        WinSound.Play();
        int StarsComplete;
        string EndGameStatustxt;
        _getStarsAnim.LevelTxt.text = GameLevel.ToString();

        if (DropsCount <= 15)
        {
            EndGameStatustxt = "Awesome!";
            StarsComplete = 3;
        }
        else if ((DropsCount > 15) && (DropsCount <= 25))
        {
            EndGameStatustxt = "Nice!";
            StarsComplete = 2;
        }
        else
        {
            EndGameStatustxt = "Good!";
            StarsComplete = 1;
        }
        GameMenuManager.Instance.playerData.Money += 25;
        _levelsManager.levelsdataarray[GameLevel].StarsComplete = StarsComplete;
        _getStarsAnim.EndStatusText.text = EndGameStatustxt;
        DropsCount = 0;
        Invoke("OnEndRoundPanel", 1.5f);
    }

    private void OnEndRoundPanel()
    {
        EndRoundPanelObj.SetActive(true);
    }

    public void UpdateStatusText(string status)
    {
        Destroy(BallTemp);
        BallTemp = null;

        if ((status == "Win") && (BoxTouches >= BoxTouchesNeed))
        {
            FillGreen.fillAmount = 0;
            FillOrange.fillAmount = 0;
            FillRed.fillAmount = 0;
            _levelsManager.BasketEffect.SetActive(true);
            Win();
        }
        else
        {
            SpawnBall();
        }
    }

    private void OnDestroy()
    {
        BallDropper.ThrowEvent -= UpdateFill;
    }
}
