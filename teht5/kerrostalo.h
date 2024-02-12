#ifndef KERROSTALO_H
#define KERROSTALO_H

#include "Katutaso.h"
#include "Kerros.h"
using namespace std;

class Kerrostalo {
public:
    Kerrostalo();
    void maaritaAsunnot();
    double laskeKulutus(double);
private:
    Katutaso* eka;
    Kerros* toka;
    Kerros* kolmas;
};

#endif // KERROSTALO_H
