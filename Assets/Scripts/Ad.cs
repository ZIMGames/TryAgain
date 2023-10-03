using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using AppodealStack.Monetization.Api;
using AppodealStack.Monetization.Common;

public class Ad : MonoBehaviour, IAppodealInitializationListener, IInterstitialAdListener, IRewardedVideoAdListener
{
    public static Ad Instance;
    private string AppKey = "5bc66218a6f859056b042efe26c86b889dd803682deea2a7";
    private int count;
    public bool videoFinished;
    private double rewardAmount;
    private string rewardName;
    //public StartFreeGame _startFreeGame;

    private void Start()
    {
        Instance = this;
        DontDestroyOnLoad(this);
        count = 0;
        int adTypes = AppodealAdType.Interstitial | AppodealAdType.Banner | AppodealAdType.RewardedVideo | AppodealAdType.Mrec;
        Appodeal.Initialize(AppKey, adTypes, this);
        Appodeal.SetRewardedVideoCallbacks(this);
        Appodeal.Cache(AppodealAdType.Interstitial);
        Appodeal.Cache(AppodealAdType.RewardedVideo);
    }

    public void OnInitializationFinished(List<string> errors) { }

    private void Update()
    {
        if (videoFinished)
        {
            GameMenuManager.Instance.playerData.Money += 25;
            PlayBallManager.Instance.RewardText.text = 50.ToString();
            videoFinished = false;
        }
    }

    public void ShowInterstitial()
    {
        count++;
        if (count == 150)
        {
            if (Appodeal.IsLoaded(AppodealAdType.Interstitial))
                Appodeal.Show(AppodealShowStyle.Interstitial);
            count = 0;
        }
    }

    public void ShowRewarded()
    {
        if (Appodeal.IsLoaded(AppodealAdType.RewardedVideo))
            Appodeal.Show(AppodealShowStyle.RewardedVideo);
    }


    #region Interstitial
    public void OnInterstitialLoaded(bool isPrecache)
    {
        throw new System.NotImplementedException();
    }

    public void OnInterstitialFailedToLoad()
    {
        throw new System.NotImplementedException();
    }

    public void OnInterstitialShowFailed()
    {
        throw new System.NotImplementedException();
    }

    public void OnInterstitialShown()
    {
        throw new System.NotImplementedException();
    }

    public void OnInterstitialClosed()
    {
        throw new System.NotImplementedException();
    }

    public void OnInterstitialClicked()
    {
        throw new System.NotImplementedException();
    }

    public void OnInterstitialExpired()
    {
        throw new System.NotImplementedException();
    }

    public void OnRewardedVideoLoaded(bool isPrecache)
    {
        throw new System.NotImplementedException();
    }

    public void OnRewardedVideoFailedToLoad()
    {
        throw new System.NotImplementedException();
    }

    public void OnRewardedVideoShowFailed()
    {
        throw new System.NotImplementedException();
    }

    public void OnRewardedVideoShown()
    {
        throw new System.NotImplementedException();
    }

    public void OnRewardedVideoFinished(double amount, string currency)
    {
        rewardAmount = amount;
        rewardName = currency;
        videoFinished = true;
    }

    public void OnRewardedVideoClosed(bool finished)
    {
        throw new System.NotImplementedException();
    }

    public void OnRewardedVideoExpired()
    {
        throw new System.NotImplementedException();
    }

    public void OnRewardedVideoClicked()
    {
        throw new System.NotImplementedException();
    }

    #endregion
}
