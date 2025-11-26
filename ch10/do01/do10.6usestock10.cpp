//
// Created by 李灏 on 25-11-25.
//

#include <iostream>
#include "do10.4stock10.h"

using namespace std;

int main() {
    Stock fCat("NSmart", 20, 12.5);

    fCat.show();
    fCat.buy(15, 18.125);
    fCat.show();
    fCat.sell(400, 20);
    fCat.show();

    cout << "-------" << endl;

    fCat.buy(300000, 40.125);
    fCat.show();
    fCat.sell(300000, 0.125);
    fCat.show();

    return 0;
}