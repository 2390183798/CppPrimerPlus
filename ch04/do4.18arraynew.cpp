#include <iostream>
#include <array>
using namespace std;

int main(void)
{
    double *p3 = new double[3];
    p3[0]=0.2;
    p3[1]=0.5;
    p3[2]=0.8;

    // 打印
    cout << "p3[0] = " << p3[0] << ", p3[1] = " << p3[1] << endl ;

    cout << "增加指针！！！ " << endl;
    p3 = p3 + 1;
    cout << "p3[0] = " << p3[0] << ", p3[1] = " << p3[1] << endl ;

    cout << "调回指针！！！ " << endl;
    p3 = p3 - 1;
    cout << "p3[0] = " << p3[0] << ", p3[1] = " << p3[1] << endl ;

    // delete
    delete [] p3;
    // cout << "p3[0] = " << p3[0] << ", p3[1] = " << p3[1] << endl ;

    cout << "========= " << endl;



    return 0;
}