#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();

	// Welcome the player
	PrintLine(TEXT("Welcome to Bull Cows!"));
	PrintLine(TEXT("Guess 4 letters"));
	PrintLine(TEXT("Press Enter to continue..."));

	InitGame();// Setting Up Game
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

void UBullCowCartridge::InitGame()
{
	HiddenWord = TEXT("cake");
	Lives = 4;
}