#include <iostream>
#include <ctime>

void PrintIntroduction(int Difficulty)
{
    // Print welcome messages to the terminal.
    std::cout << "Hello, world!!!!!!!!!!!!!!" << std::endl;
    std::cout << "You are a secret agent breaking into a " << Difficulty << std::endl;
    std::cout << "You need to enter the correct codes to continue..." << std::endl;
    
}

bool PlayGame(int Difficulty)
{

    PrintIntroduction(Difficulty);

    // Declare variables
    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;

    /*
    Multiline comments
    */

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Print CodeSum and CodeProduct to the terminal.
    std::cout << "+ There are 3 numbers in the code" << std::endl;
    std::cout << "+ The code add-up to: " << CodeSum << std::endl;
    std::cout << "+ The code multiplies to: " << CodeProduct << std::endl;

    int GuessA, GuessB, GuessC;
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;
    std::cout << "You entered: " << GuessA << GuessB << GuessC << std::endl;

    // Store player guesses
    int GuessSum, GuessProduct;
    GuessSum = GuessA + GuessB + GuessC;
    GuessProduct = GuessA * GuessB * GuessC;

    std::cout << "Guess sum is: " << GuessSum << std::endl;
    std::cout << "Guess product is: " << GuessProduct << std::endl;

    // Check if player's guess is correct
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "You win!" << std::endl;
        return true;
    }
    else
    {
        std::cout << "You lose!" << std::endl;
        return false;
    }
}

int main()
{   
    srand(time(NULL));
    const int MaxDifficulty = 10;
    int LevelDifficulty = 1;
    while (LevelDifficulty <= MaxDifficulty)
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear();
        std::cin.ignore();

        if (bLevelComplete)
        {
           LevelDifficulty += 1; 
        }
    }
    
    std::cout << "Congratulations! You finished the game!";

     
    return 0;
}
