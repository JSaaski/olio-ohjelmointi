#ifndef KATUTASO_H
#define KATUTASO_H

#include "Asunto.h"
using namespace std;

class Katutaso {
public:
    Katutaso();
    void maaritaAsunnot();
    double laskeKulutus(double);
private:
    Asunto* as1;
    Asunto* as2;
};

#endif // KATUTASO_H
