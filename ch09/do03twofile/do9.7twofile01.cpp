#include <iostream>
using namespace std;

int tom = 3;
int dick = 30;
static int harry = 300;

void remote_access();

int main(void)
{

    cout << "" << endl;
    cout  << "&tom = " << &tom << ", &dick = " << &dick << endl;
    cout << "&harry = " << &harry << endl;

    cout << "--------remote" << endl;
    remote_access();
    return 0;
}
