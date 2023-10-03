using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LevelsScrollView : MonoBehaviour
{
    [SerializeField] private GameObject LevelPrefab;

    [SerializeField] private ScrollRect Scroll;

    [SerializeField] private Color BorderLockedColor;

    private List<GameObject> LevelsTemp = new List<GameObject>();

    private GameMenuManager _manager;

    private void Start()
    {
        _manager = FindObjectOfType<GameMenuManager>();
        SpawnLevels();
    }

    public void SpawnLevels()               //LvlCount = LevelsManager.Instance.levelsdataarray.Length - 1
    {
        _manager.CheckTrophyRewards();
        List<int> LevelsStars = DeleteSavedData.GetLevelStarsCompleted();
        int stars;
        bool CentalLvl = true;

        for (int i = 1; i < LevelsStars.Count; i++)
        {
            stars = LevelsStars[i];
            GameObject temp = Instantiate(LevelPrefab, Scroll.content) as GameObject;
            LevelsTemp.Add(temp);
            var tempComp = temp.GetComponent<LvlPrefObj>();
            tempComp.LevelIndex = i;
            tempComp.Leveltxt.GetComponent<Text>().text = i.ToString();
            tempComp.CanPlay = true;

            if (stars == 0)
            {
                tempComp.StarsContainer.SetActive(false);

                if (CentalLvl)
                {
                    /*
                    for (int s = 0; s < tempComp.Stars.Length; s++)
                    {
                        tempComp.Stars[s].SetActive(false);
                    }
                    */
                    CentalLvl = false;
                }
                else
                {
                    tempComp.Leveltxt.SetActive(false);
                    tempComp.Lock.SetActive(true);
                    tempComp.CanPlay = false;
                    tempComp.Border.color = BorderLockedColor;
                }
            }
            else
            {
                switch (stars)
                {
                    case 1:
                        tempComp.Stars[1].SetActive(false);
                        tempComp.Stars[2].SetActive(false);
                        break;
                    case 2:
                        tempComp.Stars[2].SetActive(false);
                        break;
                }
            }
        }
    }
}
