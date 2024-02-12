#include "Kerros.h"
Kerros::Kerros() {
    cout << "Kerros luotu" << endl;
}

void Kerros::maaritaAsunnot() {
    cout << "Maaritetaan 4 kpl kerroksen asuntoja" << endl;
    Katutaso::maaritaAsunnot();
    as1 = new Asunto();
    as2 = new Asunto();
    as3 = new Asunto();
    as4 = new Asunto();
    as1->maaritaAsunnot();
    as2->maaritaAsunnot();
    as3->maaritaAsunnot();
    as4->maaritaAsunnot();
     laskeKulutus(1);

}

double Kerros::laskeKulutus(double) {
     double katutasokulutus = Katutaso::laskeKulutus(1);
     double kerroskulutus = as1->laskeKulutus(1) + as2->laskeKulutus(1) + as3->laskeKulutus(1) + as4->laskeKulutus(1);
     cout << "Kokonaiskulutus, kun hinta = " << 1 << " on " << katutasokulutus + kerroskulutus << endl;
     return katutasokulutus + kerroskulutus;
}
