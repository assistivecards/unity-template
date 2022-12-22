using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PackageSelectManager : MonoBehaviour
{
    [SerializeField] private GameObject levelChangeScreen;
    [SerializeField] private TransitionScreenManager transitionScreenManager;
    [SerializeField] private BoardGenerator boardGenerator;
    [SerializeField] private PackSelectionPanel packSelectionPanel;
    private string selectedPack;

    public async void OnPackSelect()
    {
        levelChangeScreen.SetActive(false);
        transitionScreenManager.IncrementProgress(1);
        selectedPack = packSelectionPanel.selectedPackElement.name;
        await boardGenerator.CacheCards(selectedPack);
        await boardGenerator.GenerateRandomBoardAsync(selectedPack);
    }
}