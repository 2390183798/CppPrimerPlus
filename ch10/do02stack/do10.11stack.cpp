
#include <iostream>

#include "do10.10stack.h"



Stack::Stack() {
    top = 0;
}

bool Stack::isempty() const {
    return top == 0;
}

bool Stack::isfull() const {
    return top == MAX;
}

void Stack::list() const {
    using namespace std;
    cout << "---" << endl;
    int n;
    for(n = 0; n< top; n++) {
        cout << "index: [" << n << "] is " << items[n] << endl;
    }
    cout << "---" << endl;
}

bool Stack::push(const Item &item) {
    if(top < MAX) {
        items[top++] = item;
        return true;
    } else {
        return false;
    }
}

bool Stack::pop(Item &item) {
    if(top > 0) {
        item = items[--top];
        return true;
    } else {
        return false;
    }
}
