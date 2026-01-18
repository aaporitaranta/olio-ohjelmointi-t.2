#include "GameNew.h"
#include <iostream>
#include <cstdlib>
#include <ctime>


GameNew::GameNew(int max) {
    maxNumber = max;
    
    srand(time(0));
    randomNumber = rand() % maxNumber + 1;
    
    
    numOfGuesses = 0;
}

GameNew::~GameNew() {

}

void GameNew::play() {
    std::cout << "Arvaa luku väliltä 1-" << maxNumber << std::endl;

    while (playerGuess != randomNumber) {
        std::cout << "Anna arvaus: ";
        std::cin >> playerGuess;
        numOfGuesses++;

        if (playerGuess < randomNumber) {
            std::cout << "Luku on suurempi." << std::endl;
        } 
        else if (playerGuess > randomNumber) {
            std::cout << "Luku on pienempi." << std::endl;
        } 
        else {
            std::cout << "Oikein!" << std::endl;
            printGameResult();
        }
    }
}

void GameNew::printGameResult() {
    std::cout << "Peli loppui. Arvasit oikein luvun " << randomNumber 
              << " ja käytit siihen " << numOfGuesses << " arvausta." << std::endl;
}
