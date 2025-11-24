#include <iostream>
using namespace std;

extern int tom;
static int dick = 10;
int harry = 200;

void remote_access(){
    cout << "" << endl;
    cout  << "&tom = " << &tom << ", &dick = " << &dick << endl;
    cout << "&harry = " << &harry << endl;
}
