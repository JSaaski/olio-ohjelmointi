#include <iostream>
#include "kerrostalo.h"

using namespace std;


int main() {
    Kerrostalo* kerrostalo = new Kerrostalo();
    kerrostalo->maaritaAsunnot();
    kerrostalo->laskeKulutus(1);

    delete kerrostalo;
    return 0;
}
