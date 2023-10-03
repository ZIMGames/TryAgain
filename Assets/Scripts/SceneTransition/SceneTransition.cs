using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class SceneTransition : MonoBehaviour
{
    //public Text LoadingPercentage;
    public Image LoadingProgressBar;

    public GameObject SceneTransitionCanvas;

    private static SceneTransition Instance;

    private static bool shouldPlayOpeningAnimation = false;

    private Animator compomemtAnimator;
    private AsyncOperation loadingSceneOperation;


    private void Start()
    {
        Instance = this;

        compomemtAnimator = GetComponent<Animator>();

        if (shouldPlayOpeningAnimation)
        {
            compomemtAnimator.SetTrigger("sceneOpening");
        }
    }


    private void Update()
    {
        if (loadingSceneOperation != null)
        {
            //LoadingPercentage.text = Mathf.RoundToInt(loadingSceneOperation.progress * 100) + "%";
            LoadingProgressBar.fillAmount = loadingSceneOperation.progress;
        }
    }

    public static void SwitchToScene(string sceneName)
    {
        Instance.compomemtAnimator.SetTrigger("sceneClosing");

        Instance.loadingSceneOperation = SceneManager.LoadSceneAsync(sceneName);
        Instance.loadingSceneOperation.allowSceneActivation = false;
    }

    public void OnAnimationOver()
    {
        shouldPlayOpeningAnimation = true;
        loadingSceneOperation.allowSceneActivation = true;
    }

    public void OffBackground()
    {
        SceneTransitionCanvas.SetActive(false);
    }
}
