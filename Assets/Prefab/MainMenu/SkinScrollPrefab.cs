using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SkinScrollPrefab : MonoBehaviour
{
    private bool Move;
    [SerializeField] private float Speed;
    [SerializeField] private Vector2 Direction;
    [SerializeField] private ShopController _shopController;

    [SerializeField] private GameObject BGScroll;

    public Text ItemTypeText;

    private void FixedUpdate()
    {
        if (Move)
        {
            transform.Translate(Direction * Speed * Time.fixedDeltaTime);
            if (transform.localPosition.y >= 300)
            {
                transform.localPosition = new Vector2(0, 300);
                Move = false;
                GetComponent<Animator>().SetTrigger("Open");
            }
        }
    }

    public void StartMove()
    {
        Move = true;
    }

    public void StartSpawn()
    {
        BGScroll.SetActive(true);
        _shopController.SpawnShopItemsHelper();
    }

    public void Deactivate()
    {
        BGScroll.SetActive(false);
        _shopController.ShopTypeObjActive(true);
        gameObject.SetActive(false);
    }
}
