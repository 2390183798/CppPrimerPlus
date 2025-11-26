//
// Created by 李灏 on 25-11-25.
//

#include <iostream>
#include "do10.4stock10.h"

using namespace std;

Stock::Stock() {
    cout << "Defalut constructor called \n ";
    company = "no name";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock::Stock(const string &co, long n, double pr) {
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

Stock::~Stock() {
    cout << "Bye, " << company << "!" << endl;
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

void Stock::show() const {
    // const ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
    const ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
    const streamsize prec3 = cout.precision(3);
    const streamsize prec2 = cout.precision(2);

    cout << "Company: " << company
        << ", Shares: " << shares << endl;

    cout  << "Share Price: $" << share_val;
    // cout.setf(orig, ios_base::floatfield);
    cout.precision(prec2);


    cout  << ", Total Worth: $" << total_val << endl;
    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec3);
}
