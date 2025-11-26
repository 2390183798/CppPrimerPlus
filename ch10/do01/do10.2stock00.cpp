//
// Created by 李灏 on 25-11-25.
//

#include <iostream>
#include "do10.1stock00.h"

using namespace std;

void Stock::acquire(const string &co, long n, double pr) {
    company = co;
    if(n<0) {
        cout << "Number of shares can't be negative; "
            << company << " shares set to 0. \n ";
        shares = 0;
    } else {
        shares = n;
    }
    share_val = pr;
    set_tot();
}

void Stock::buy(long num, double price) {
    if(num < 0) {
        cout << "Number of shares purchased can't be negative."
            << "Transaction is aborted." << endl;
    } else {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price) {
    if(num < 0) {
        cout << "Number of shares sold can't be negative."
            << "Transaction is aborted." << endl;
    } else if(num > shares) {
        cout << "You can't sell more than you have!"
            << "Transaction is aborted." << endl;
    } else {
        shares -= num;
        share_val = price;
        set_tot();
        // Stock::update(price);
    }
}

void Stock::update(double price) {
    share_val = price;
    set_tot();
}

void Stock::show() {
    cout << "Company: " << company
        << ", Shares: " << shares << endl;

    cout  << "Share Price: $" << share_val
        << ", Total Worth: $" << total_val << endl;
}