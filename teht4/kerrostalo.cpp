#include "Kerrostalo.h"
#include "kerros.h"
#include "katutaso.h"

Kerrostalo::Kerrostalo() {
    cout << "Kerrostalo luotu" << endl;
}

void Kerrostalo::maaritaAsunnot() {
    cout << "Maaritetaan koko kerrostalon kaikki asunnot" << endl;
    eka.maaritaAsunnot();
    toka.maaritaAsunnot();
    kolmas.maaritaAsunnot();
}

double Kerrostalo::laskeKulutus(double) {
    double kokonaiskulutus = eka.laskeKulutus(1) + toka.laskeKulutus(1) + kolmas.laskeKulutus(1);
    cout << "Kerrostalon kokonaiskulutus, kun hinta = " << 1 << " on " << kokonaiskulutus << endl;
    return kokonaiskulutus;
}
