#include <iostream>
#include <array>
using namespace std;

int main(void)
{
    int updates = 6;

    // int *p_updates;
    // p_updates = &updates;

    int *p_updates = &updates;

    // 打印 值
    cout << "Values: updates = " << updates;
    cout << ", *p_updates = " << *p_updates << endl;

    // 打印 地址
    cout << "Address: &updates = " << &updates;
    cout << ", p_updates = " << p_updates << endl;

    cout << "===================== " << endl;

    // 修改后
    *p_updates = *p_updates + 1;
    cout << "Now updates = " << updates << endl;
    cout << "    *p_updates = " << *p_updates << endl;

    return 0;
}