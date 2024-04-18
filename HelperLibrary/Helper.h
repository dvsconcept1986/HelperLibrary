#pragma once
#include <iostream>
#include <limits>

namespace Helper
{
    int GetValidatedInt(const char* strMessage, int nMinimumRange = 0, int nMaximumRange = 0) {
        int userInput;
        bool isValid = false;

        do {
            std::cout << strMessage;
            std::cin >> userInput;

            // Check if input is a valid integer
            if (std::cin.fail()) {
                std::cin.clear(); // Clear error flags
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
                std::cout << "Invalid input. Please enter a valid integer.\n";
            }
            else {
                // Check if input is within range
                if ((nMinimumRange == 0 && nMaximumRange == 0) || (userInput >= nMinimumRange && userInput <= nMaximumRange)) {
                    isValid = true;
                }
                else {
                    std::cout << "Input out of range. Please enter a number between " << nMinimumRange << " and " << nMaximumRange << ".\n";
                }
            }
        } while (!isValid);

        return userInput;
    }

}
