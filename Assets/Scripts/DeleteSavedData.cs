using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class DeleteSavedData
{
    public static void ClearGameData()
    {
        for (int i = 1; i < 31; i++)
        {
            PlayerPrefs.SetInt("StarsComplete" + i, 0);
        }
    }

    public static List<int> GetLevelStarsCompleted()
    {
        List<int> LevelsList = new List<int>();

        for (int i = 0; i < 31; i++)
        {
            LevelsList.Add(PlayerPrefs.GetInt("StarsComplete" + i, 0));
        }
        return LevelsList;
    }

    public static void SetCompeletedLevels(int LevelCount, int Stars)
    {
        for (int i = 1; i <= LevelCount; i++)
        {
            PlayerPrefs.SetInt("StarsComplete" + i, Stars);
        }
    }
}
