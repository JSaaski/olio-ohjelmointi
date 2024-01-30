#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "Chef.h"

class ItalianChef : public Chef {
public:
    ItalianChef(string name, int jauhot, int vesi);
    string getName();
    void makePasta(int jauhot, int vesi);
private:
    int jauhot;
    int vesi;
};
#endif // ITALIANCHEF_H
