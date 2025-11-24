#include <iostream>
#include "do9.1coordin.h"
using namespace std;

int main(void)
{
    rect rplace;
    polar pplace;

    cout << "Enter the x and y values: " << endl;

    while(cin >> rplace.x >> rplace.y){
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        cout << "Next tow numbers ( q to quit): " << endl;
    }

    cout << "Bye!" << endl;
    return 0;
}
