#include <iostream>

int main()
{
    // Print welcome messages to the terminal.
    std::cout << "Hello, world!" << std::endl;
    std::cout << "You are a secret agent breaking into a secure server room." << std::endl;
    std::cout << "You need to enter the correct codes to continue..." << std::endl;
    
    // Declare variables
    const int a = 4;
    const int b = 1;
    const int c = 2;

    /*
    Multiline comments
    */
     
    const int sum = a + b + c;
    const int product = a * b * c;

    // Print sum and products to the terminal.
    std::cout << "+ There are 3 numbers in the code" << std::endl;
    std::cout << "+ The code add-up to: " << sum << std::endl; 
    std::cout << "+ The code multiplies to: " << product << std::endl; 

    return 0;
}