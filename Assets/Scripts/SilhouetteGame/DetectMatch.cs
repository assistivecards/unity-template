using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.Events;
using UnityEngine.UI;
using TMPro;

public class DetectMatch : MonoBehaviour, IPointerUpHandler
{
    [SerializeField] Transform shownImageSlot;
    private bool isMatched = false;
    [SerializeField] Board board;
    private GameAPI gameAPI;
    private Transform matchedImageTransform;
    [SerializeField] GameObject gamePanel;
    [SerializeField] GameObject[] silhouettes;
    [SerializeField] GameObject cardName;

    private void Awake()
    {
        gameAPI = Camera.main.GetComponent<GameAPI>();
    }

    private void OnTriggerEnter2D(Collider2D other)
    {
        if (gameObject.GetComponent<Image>().sprite == other.gameObject.GetComponent<Image>().sprite)
        {
            matchedImageTransform = other.transform;
            isMatched = true;
        }
    }

    private void OnTriggerExit2D(Collider2D other)
    {
        if (gameObject.GetComponent<Image>().sprite == other.gameObject.GetComponent<Image>().sprite)
        {
            isMatched = false;
        }
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        if (isMatched)
        {
            //correct match
            transform.position = matchedImageTransform.position;
            gameAPI.VibrateStrong();
            gameAPI.PlaySFX("Success");
            LeanTween.color(matchedImageTransform.gameObject.GetComponent<Image>().rectTransform, Color.white, .5f);
            Invoke("ScaleImagesDown", .5f);
            // board.ClearBoard();
            // await board.GenerateRandomBoardAsync();
            board.Invoke("ClearBoard", 1f);
            board.Invoke("GenerateRandomBoardAsync", 1f);
            isMatched = false;
        }

        else
        {
            //wrong match
            if (eventData.position.x < gamePanel.GetComponent<Image>().rectTransform.rect.width / 2 && eventData.position.x > gamePanel.GetComponent<BoxCollider2D>().bounds.min.x + 145)
            {
                transform.position = eventData.position;
            }
            else
            {
                gameAPI.VibrateWeak();
                LeanTween.move(gameObject, shownImageSlot.position, 0.5f);
                // transform.position = shownImageSlot.position;
            }
        }
    }

    public void ScaleImagesDown()
    {
        LeanTween.scale(cardName, Vector3.zero, 0.25f);
        LeanTween.scale(gameObject, Vector3.zero, 0.25f);
        for (int i = 0; i < silhouettes.Length; i++)
        {
            LeanTween.scale(silhouettes[i], Vector3.zero, 0.25f);
        }
    }
}