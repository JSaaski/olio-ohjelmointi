#include "ItalianChef.h"
#include <iostream>

ItalianChef::ItalianChef(string Iname, int jauhot, int vesi): Chef(Iname) {
    ItalianChef::name = Iname;
    ItalianChef::jauhot = jauhot;
    ItalianChef::vesi = vesi;
}

void ItalianChef::makePasta(int jauhot, int vesi) {
    cout << "Chef " << name << " makes pasta with special recipe" << endl;
    cout << "Chef " << name << " used jauhot = " <<jauhot<< endl;
    cout << "Chef " << name << " used vesi = " <<vesi<<endl;
}
string ItalianChef::getName(){
    return name;
}

