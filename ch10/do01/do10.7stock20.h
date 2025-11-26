//
// Created by 李灏 on 25-11-25.
//

#ifndef DO10_7STOCK20_H
#define DO10_7STOCK20_H

#include <string>
using namespace std;

class Stock {
private:
    string company;
    long shares;
    double share_val;
    double total_val{};
    void set_tot() {
        total_val = (shares * share_val);
    }
public:
    Stock();
    Stock(const string &co, long n=0, double pr=0);
    ~Stock();
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show() const;

    const Stock &topval(const Stock &s) const;
};

#endif //DO10_7STOCK20_H
