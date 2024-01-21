#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Game{

private:
    int maxNumber;
    int playerGuess;
    int randomNumber;
    int NumOfGuesses;

    void printGameResult();

public:
    Game(int maxNum);
    ~Game();

    void play();
};



#endif // GAME_H
