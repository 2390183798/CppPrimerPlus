#include <iostream>
#include <cctype>

#include "do10.10stack.h"

using namespace std;

int main(){
    Stack st;
    char ch;
    unsigned long po;

    cout << "Please enter \nA to add a purchase order,\n";
    cout << "P to process a PO, or Q to quit.\n";

    while(cin >> ch && toupper(ch) != 'Q'){
        while(cin.get() != '\n'){
            continue;;
        }

        if(!isalpha(ch)){
            cout << '\a';
            continue;
        }

        switch(ch) {
            case 'A' :
            case 'a' :
                cout << "Enter a PO number to add: ";
                cin>> po;
                if(st.isfull()) {
                    cout << "stack already full\n";
                } else {
                  st.push(po);
                }
                break;
            case 'L' :
            case 'l' :
                if(st.isempty()) {
                    cout << "stack already empty\n";
                } else {
                    st.list();
                }
                break;
            case 'P' :
            case 'p' :
                if(st.isempty()) {
                    cout << "stack already empty\n";
                } else {
                    st.pop(po);
                    cout << "PO #" << po << " poped\n";
                }
                break;
            default:
                break;
        }
        cout << "Please enter A to add a purchase order, " << endl;
        cout << "P to process & PO, or Q to quit." << endl;
    }

    cout << "Bye!" << endl;
    return 0;
}
