#ifndef KERROS_H
#define KERROS_H
#include "katutaso.h"
#include "Asunto.h"
using namespace std;

class Kerros : public Katutaso {
public:
    Kerros();
    virtual void maaritaAsunnot();
    double laskeKulutus(double);
private:
    Asunto* as1;
    Asunto* as2;
    Asunto* as3;
    Asunto* as4;
};

#endif // KERROS_H
