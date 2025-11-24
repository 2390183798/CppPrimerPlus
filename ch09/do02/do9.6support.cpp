#include <iostream>
using namespace std;

extern double warming;

void update(double dt);
void local();

void update(double dt) {
    extern double warming;

    warming += dt;

    cout << "Updating global warming to " << warming << " degress." << endl;
}

void local() {
    double warming = 0.8;

    cout << "Local warming = " << warming << " degress" << endl;

    cout << "But global warming = " << ::warming << " degress." << endl;
}
