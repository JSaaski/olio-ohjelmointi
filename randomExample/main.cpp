#include <iostream>

using namespace std;

int main()
{
    //sovellus tulostaa satunnaisluvun
    //väliltä 1-10
    srand(time(0)); //asetetaan siemenluku kellonajan avulla
    int myRandom = rand()%10 + 1; //jakojäännös jaettaessa 10:lla + 1
    cout << "Satunnaisluku = "<< myRandom << endl;
    return 0;
}
