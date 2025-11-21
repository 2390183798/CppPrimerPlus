#include <iostream>
#include <array>
using namespace std;

int main(void)
{
    int nights = 1001;

    // int *p_updates;
    // p_updates = &updates;

    int *pt = new int;
    *pt = 1001;
    *pt = nights;

    // 打印
    cout << "Values: night = " << nights;
    cout << ", &night = " << &nights << endl;

    // 打印
    cout << "Address: *pt = " << *pt;
    cout << ", pt = " << pt << endl;


    cout << "========= " << endl;


    double *pd = new double;
    *pd = 123456789012;

    // 指针 地址都是8字节，   int 是 4字节，  double 是 8字节
    // （1字节 8位,  2^8 = 256,  2^10 ~ 10^3  ,  2^32 ~ 4* 10^9）
    cout << "Value: *pd = " << *pd << endl;
    cout << "    &pd = " << &pd << endl;
    cout << "    size of pt = " << sizeof(pt) << endl;
    cout << "    size of *pt = " << sizeof(*pt) << endl;
    cout << "===== " << endl;
    cout << "    size of pd = " << sizeof(pd) << endl;
    cout << "    size of *pd = " << sizeof(*pd) << endl;


    return 0;
}