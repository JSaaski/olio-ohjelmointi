#include "Katutaso.h"

Katutaso::Katutaso() {
    cout << "Katutaso luotu" << endl;
}

void Katutaso::maaritaAsunnot() {
    cout << "Maaritetaan 2 kpl katutason asuntoja" << endl;
    as1 = new Asunto();
    as2 = new Asunto();
    as1->maaritaAsunnot();
    as2->maaritaAsunnot();
}

double Katutaso::laskeKulutus(double hinta) {
    double kulutus = (as1->asukasMaara * as1->neliot * hinta) + (as2->asukasMaara * as2->neliot * hinta);
    return kulutus;
}
