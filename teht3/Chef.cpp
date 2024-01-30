#include "Chef.h"

Chef::Chef(string Cname) {
    name = Cname;
    cout << "Chef " << name << " konstruktori" << endl;
}

Chef::~Chef() {
    cout << "Chef " << name << " destruktori" << endl;
}
void Chef::makeSalad() {
    cout << "Chef " << name << " makes salad" << endl;
}

void Chef::makeSoup() {
    cout << "Chef " << name << " makes soup" << endl;
}
