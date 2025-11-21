#include <iostream>
#include <array>
using namespace std;

int main(void)
{
    int higgens = 6;

    // int *p_updates;
    // p_updates = &updates;

    int *pt = &higgens;

    // 打印
    cout << "Values: higgens = " << higgens;
    cout << ", *higgens = " << &higgens << endl;

    // 打印
    cout << "Address: *pt = " << *pt;
    cout << ", pt = " << pt << endl;

    return 0;
}