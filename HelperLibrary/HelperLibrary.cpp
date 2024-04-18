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



    return 0;
}

