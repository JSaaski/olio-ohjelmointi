#include "Asunto.h"
#include <iostream>

Asunto::Asunto() {
    cout << "Asunto luotu" << endl;
}

void Asunto::maaritaAsunnot() {
    asukasMaara = 2;
    neliot = 100;
    cout << "Asunto maaritelty asukkaita = " << asukasMaara << " nelioita = " << neliot << endl;
}

double Asunto::laskeKulutus(double hinta) {
    return asukasMaara * neliot * hinta;
}
