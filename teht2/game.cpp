 #include "game.h"
using namespace std;

Game::Game(int maxNum) : maxNumber(maxNum) {
    cout << "GAME CONSTRUCTOR: object initialized with " << maxNum << " as the maximum value" << endl;
    srand(time(0));
    randomNumber = rand() % maxNumber + 1;
}

Game::~Game() {
    cout << "GAME DESTRUCTOR: object cleared from stack memory" << endl;
}

void Game::printGameResult() {
    cout << "Youe guessed the right answer " << randomNumber << " with " << NumOfGuesses << " quesses." << endl;

}

void Game::play() {


    do {
        cout << "Give your guess between 1-" << maxNumber << endl;
        cin >> playerGuess;
        NumOfGuesses++;

        if (playerGuess > maxNumber) {
            cout << "Your guess is over max number" << endl;
            NumOfGuesses--;
        } else if (playerGuess > randomNumber) {
            cout << "Your guess is too big" << endl;
        } else if (playerGuess < randomNumber) {
            cout << "Your guess is too small" << endl;
        }

    } while (playerGuess != randomNumber);

    printGameResult();
}
