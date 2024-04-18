// HelperLibrary.cpp : This file contains the 'main' function for testing the namespace functions that I
// that i will declare in the Helper.h file.
//

#include <iostream>
#include "Helper.h"

using namespace Helper;

int main()
{
    //Testing GetValidatedInt function from the namespace
    int minRange = 1;
    int maxRange = 10;
    int userInput = GetValidatedInt("Enter an integer within the range [1, 10]: ", minRange, maxRange);
    std::cout << "You entered: " << userInput << std::endl;


    //Testing PrintBinary function from the namespace
    PrintBinary(345);


    //Testing the PrintRandomNumberInRange function from the namespace
    int minRandRange = 134;
    int maxRandRange = 1006;
    //Could also substitute the above declarations with code to request userInput of the min and max for the range

    // Print a random number between minRange and maxRange
    std::cout << "\nRandom number between " << minRandRange << " and " << maxRandRange << ": " << RandomNumberInRange(minRandRange, maxRandRange) << std::endl;


    return 0;
}

