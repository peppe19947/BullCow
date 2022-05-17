#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();

    SetupGame();// Setting Up Game

    PrintLine(FString::Printf(TEXT("The hidden word is: %s.\nIs: %i characters long."), *HiddenWord, HiddenWord.Len()));

    // Welcome the player
    PrintLine(TEXT("Welcome to Bull Cows!"));
    PrintLine(TEXT("Guess 4 letters"));
    PrintLine(TEXT("Press Enter to continue..."));

    
    // prompt player for guess
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    ClearScreen();
    
    //check player input

    if (HiddenWord == Input)
    {
        PrintLine(TEXT("You have Won!"));
    }
    else
    {
        if (Input.Len() != HiddenWord.Len())
        {
            PrintLine(TEXT("The hidden word is %i characters long. Try Again!"), HiddenWord.Len());//Magic Number
        }

        PrintLine(TEXT("You have Lost!"));
    }
    // Check If Isogram
    // Check Right Number of Characters

    // Remove Life

    // Check if lives > 0
    // If yes GuessAgain
    // Show Lives Left
    // If No Show GameOver and HiddenWord?
    // Prompt To Play Again, Press Enter to Play Again?
    // Check User Input
    // Play Again or quit

}

void UBullCowCartridge::SetupGame()
{
    HiddenWord = TEXT("cake");
    Lives = 4;
}