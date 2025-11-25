#include <iostream>
#include "do9.11namesp.h"

using namespace debets;
using namespace pers;

void other();
void another();

int main(){
    const debets::Debt golf = {
        {"Benny", "Goatniff"},
        120
    };
    debets::showDebt(golf);

    other();
    another();
    return 0;
}

void other(){
    Person dg = {"Doodles", "Glister"};
    debets::showPerson(dg);

    cout << endl;

    debets::Debt zippy[3];

    int i;
    for(i=0; i<3; i++) {
        debets::getDebt(zippy[i]);
    }
    for(i=0; i<3; i++) {
        debets::showDebt(zippy[i]);
    }

    cout<< "Total debt: $" << debets::sumDebts(zippy, 3) << endl;
}

void another(){
    const Person collector = {"Milo", "Rightshift"};
    pers::showPerson(collector);

    cout << endl;
}