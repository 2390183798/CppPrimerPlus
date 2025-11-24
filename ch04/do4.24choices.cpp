#include <iostream>
#include <vector>
#include <array>

using namespace std;

struct antarctica_years_end{
    int year;
};

int main(void)
{
    // old cpp
    double a01[4] = {1.2, 2.4, 3.6, 4.8};
    // 98 stl
    vector<double> a02(4);  // create 4 elements
    a02[0] = 1.0/3.0;
    a02[1] = 1.0/5.0;
    a02[2] = 1.0/7.0;
    a02[3] = 1.0/9.0;
    // cpp11
    array<double, 4> a03 = {3.14, 2.72, 1.62, 1.41};
    array<double, 4> a04;
    a04 = a03;

    // array notation
    cout << "a01[2]: " << a01[2] << " at " << &a01[2] << endl;
    cout << "a02[2]: " << a02[2] << " at " << &a02[2] << endl;
    cout << "a03[2]: " << a03[2] << " at " << &a03[2] << endl;
    cout << "a04[2]: " << a04[2] << " at " << &a04[2] << endl;

    cout << "-------------" << endl;

    a01[-2] = 20.2;
    cout << "a01[-2]: " << a01[-2] << " at " << &a01[-2] << endl;
    cout << "a03[2]: " << a03[2] << " at " << &a03[2] << endl;
    cout << "a04[2]: " << a04[2] << " at " << &a04[2] << endl;
    return 0;
}