using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class BoardGenerator : MonoBehaviour
{
    GameAPI gameAPI;
    public int cardNumber;
    [SerializeField] private GameObject tempCardObject;
    private List<GameObject> firstHalfCards = new List<GameObject>();
    public List<GameObject> cards = new List<GameObject>();
    [SerializeField] AssistiveCardsSDK.AssistiveCardsSDK.Cards cardTextures;
    private Texture2D cardTexture;
    public string selectedLangCode;
    private List<string> cardNames = new List<string>();
    private int randomValue;
    List<int> randomValueList = new List<int>();
    private void Awake()
    {
        gameAPI = Camera.main.GetComponent<GameAPI>();
    }

    public async Task CacheCards(string packName)
    {
        selectedLangCode = await gameAPI.GetSystemLanguageCode();
        cardTextures = await gameAPI.GetCards(selectedLangCode, packName);
    }

    public async void Start()
    {
        await GenerateRandomBoardAsync("animals");
    }

    public async Task GenerateRandomBoardAsync(string packSlug)
    {
        await CacheCards(packSlug);
        for(int i = 0; i< cardTextures.cards.Length; i++)
        {
            cardNames.Add(cardTextures.cards[i].title.ToLower());
        }

        for(int j = 0; j< cardNumber / 2; j++)
        {
            randomValue = Random.Range(0, cardTextures.cards.Length);
            if(randomValueList.Contains(randomValue))
            {
                randomValue = Random.Range(0, cardTextures.cards.Length);
            }
            else
            {
                randomValueList.Add(randomValue);
            }

            cardTexture = await gameAPI.GetCardImage("animals", cardNames[randomValue], 512);
            cards.Add(Instantiate(tempCardObject, Vector3.zero, Quaternion.identity));
            cards[j].transform.parent = this.transform;

            cards[j].transform.name = "Card" + j;
            cards[j].transform.GetChild(1).name = cardNames[randomValue];
            cards[j].transform.GetChild(1).GetComponent<RawImage>().texture = cardTexture;

            firstHalfCards.Add(cards[j]);
        }

        for(int y = 0; y < cardNumber / 2; y++)
        {
            cards.Add(Instantiate(firstHalfCards[y], Vector3.zero, Quaternion.identity));
            cards[(cardNumber/2) + y].transform.name = "Card" + ((cardNumber/2) + y);
            cards[(cardNumber/2) + y].transform.parent = this.transform;
        }

        EditBoard();
    }

    private void EditBoard()
    {
        foreach(GameObject card in cards)
        {
            card.transform.SetSiblingIndex(Random.Range(0, cardNumber));
            card.transform.LeanRotateZ(180, 0f);
            card.transform.localScale = new Vector3(3f,3f,1);
        }
    }
}
