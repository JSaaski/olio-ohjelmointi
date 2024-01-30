#include <iostream>
#include "Chef.h"
#include "ItalianChef.h"
using namespace std;

int main() {

    Chef Kokki("Jyrki");
    ItalianChef IKokki("Mario",100,250);
    IKokki.makePasta(250,100);

    return 0;
}
