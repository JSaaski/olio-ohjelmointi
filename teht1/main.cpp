#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int game(int maxnum)
{
    srand(time(0));
    int answer = rand() % maxnum + 1;
    int guess;
    int attempts = 0;

    cout << "Arvaa oikea numero, korkein arvattava luku on " << maxnum << ": "<<endl;

    do {
        cin >> guess;
        attempts++;

        if (guess > maxnum) {
            cout << "Arvaus liian suuri" << endl;
            attempts--;
        } else if (guess > answer) {
            cout << "Luku on pienempi" << endl;
        } else if (guess < answer) {
            cout << "Luku on suurempi" << endl;
        }

    } while (guess != answer);

    return attempts;
}

int main()
{
    int maxnum = 80;
    int attempts = game(maxnum);

    cout << "Oikea vastaus! Arvausten maara: " << attempts << endl;

        return 0;
}
