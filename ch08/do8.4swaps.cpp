#include <iostream>

void swapr(int &a, int &b);
void swapp(int *p, int *q);
void swapv(int a, int b);

int main(void)
{
    using namespace std;

    int w01 = 300;
    int w02 = 350;

    cout << "w01 = " << w01 << endl;
    cout << "w02 = " << w02 << endl;

    cout << "------- swap r" << endl;
    swapr(w01, w02);
    cout << "w01 = " << w01 << endl;
    cout << "w02 = " << w02 << endl;


    cout << "------- swap p" << endl;
    swapp(&w01, &w02);
    cout << "w01 = " << w01 << endl;
    cout << "w02 = " << w02 << endl;


    cout << "------- swap v  失败" << endl;
    swapv(w01, w02);
    cout << "w01 = " << w01 << endl;
    cout << "w02 = " << w02 << endl;



    return 0;
}

void swapr(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swapp(int *p, int *q){
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}
void swapv(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}