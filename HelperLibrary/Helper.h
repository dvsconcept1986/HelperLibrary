#pragma once
#include <iostream>
#include <limits>
#include <cstdlib>
#include <ctime>

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
                //Clear input buffer while integer is invalid
                std::cin.clear();
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

        // Clear input buffer after successful validation
        std::cin.clear(); 
        std::cin.ignore();

        return userInput;
    }
    
    //Custom function to print 32-bit binary equivalent of an integer
    void PrintBinary(int num) {
        for (int i = 31; i >= 0; --i) {
            int bit = (num >> i) & 1;
            std::cout << bit;
            if (i % 4 == 0) std::cout << ' '; // Add a space every 4 bits for readability
        }
    }

    int RandomNumberInRange(int minRange, int maxRange) {
        // Seed the random number generator with current time
        std::srand(static_cast<unsigned int>(std::time(nullptr)));

        // Generate a random number within the specified range
        int randomNumber = minRange + std::rand() % (maxRange - minRange + 1);

        return randomNumber;
    }

}
