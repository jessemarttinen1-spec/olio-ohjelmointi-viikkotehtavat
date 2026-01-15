#include "game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;



Game::Game(int maxValue)
{
    cout << "[GAME CONSTRUCTOR] called with " << maxValue << " as a maximum value" << endl;
    srand(time(NULL));
    randomNumber = rand() % maxValue + 1;
    numOfGuesses = 0;
}

void Game::play()
{
cout << "[GAME PLAY ] function called" << endl;

    while (true){
        cout << "Guess the  number" << endl;
        cin >> playerGuess;

        numOfGuesses ++;

        if (playerGuess == randomNumber){
            printGameResult();
            break;
        } else if (playerGuess > randomNumber){
            cout << "Too big" << endl;
        } else if (playerGuess < randomNumber){
            cout << "Too small" << endl;
        }
    }
}

void Game::printGameResult()
{
    cout << "[PRINTGAMERESULT] called" << endl;
    cout << "You got it the number was: " << randomNumber << endl;
    cout << "It took you: " << numOfGuesses << " attempts" << endl;

}
Game::~Game(){
    cout << "[GAME DESTRUCTOR] object cleared from stack memory" << endl;
}
