//
// Created by 李灏 on 25-11-25.
//

#include <iostream>
#include "do10.7stock20.h"

using namespace std;

const int STKS = 4;
int main() {
    Stock stocks[STKS] = {
        Stock("Ns", 12, 20.0),
        Stock("Bo", 200, 2.0),
        Stock("Mo", 130, 3.25),
        Stock("Fe", 60, 6.5)
    };

    cout << " Stock holdings: \n";

    int st;
    for(st =0; st< STKS; st++){
        stocks[st].show();
    }

    const Stock *top = &stocks[0];
    for(st =1; st<STKS; st++){
        top = &top->topval(stocks[st]);
    }

    cout << "\nMost valuable hlding:\n";
    top->show();
    return 0;



    return 0;
}