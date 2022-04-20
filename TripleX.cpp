#include <iostream>

int main()
{
    // Print welcome messages to the terminal.
    std::cout << "Hello, world!" << std::endl;
    std::cout << "You are a secret agent breaking into a secure server room." << std::endl;
    std::cout << "You need to enter the correct codes to continue..." << std::endl;
    
    // Declare variables
    const int CodeA = 4;
    const int CodeB = 1;
    const int CodeC = 2;

    /*
    Multiline comments
    */
     
    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;


    // Print CodeSum and CodeProduct to the terminal.
    std::cout << "+ There are 3 numbers in the code" << std::endl;
    std::cout << "+ The code add-up to: " << CodeSum << std::endl; 
    std::cout << "+ The code multiplies to: " << CodeProduct << std::endl; 

    int PlayerGuess;

    return 0;
}