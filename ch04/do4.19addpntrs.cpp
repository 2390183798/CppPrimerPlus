#include <iostream>
#include <array>
using namespace std;

int main(void)
{
    double wages[3] = {1000, 2000, 3000};
    short stacks[3] = {3, 2, 1};

    // a
    double *pw = wages;
    short *ps = &stacks[0];

    // array
    cout << "pw = " << pw << ", *pw = " << *pw << endl;
    pw = pw + 1;
    cout << "add 1 to the pw pointer: " << endl;
    cout << "pw = " << pw << ", *pw = " << *pw <<endl;
    cout << "ps = " << ps << ", *ps = " << *ps << endl;

    cout << "----------" << endl;

    ps = ps + 1;
    cout << "add 1 to the ps pointer: " << endl;
    cout << "ps = " << ps << ", *ps = " << *ps << endl;

    cout << "----------" << endl;
    //
    cout << "access two elements with array notation" << endl;
    cout << "stacks[0] = " << stacks[0] << ", stacks[1] = " << stacks[1] << endl;
    cout << "access two elements with pointer notation" << endl;
    cout << "stacks = " << stacks << ", *(stacks + 1) = " << *(stacks + 1) << endl;

    cout << "----------" << endl;
    //
    cout << sizeof(wages) << " = size of wages array" << endl;
    cout << sizeof(pw) << " = size of pw pointer" << endl;

    cout << "----------" << endl << endl;

    char flower[10] = "rose";
    cout << flower << "s are red" << endl;


    return 0;
}