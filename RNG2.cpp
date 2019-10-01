// Copyright (c) 2019 Patrick Gemmell All rights reserved.
//
// Created by: Patrick Gemmell
// Created on: September 2019
// This Program plays a guessing game

#include <iostream>
#include <iomanip>
#include <cstdlib>

int main() {
    while (true) {
        // This function guesses the number and compares
        const float GUESSED_ANSWER =  (rand() % 10) + 1;;
        float guessedNumber;
    
        // input
        std::cout << "Guess an integer from 0-9: ";
        std::cin >> guessedNumber;
        

        // process and output
        if (guessedNumber == GUESSED_ANSWER) {
            printf("Correct!");
            break;
        } else {
            printf("Sorry that was wrong, try again?");
        }  
    }
}
