#include <iostream>
#include "kerrostalo.h"
#include "kerros.h"
#include "asunto.h"
#include "katutaso.h"

using namespace std;


int main() {
    Kerrostalo kerrostalo;
    kerrostalo.maaritaAsunnot();
    kerrostalo.laskeKulutus(1);

    return 0;
}
