#pragma once
#include <iostream>
using namespace std;

namespace pers {
 struct Person {
  string fname;
  string lname;
 };
 void getPerson(Person &);
 void showPerson(const Person &);
}

namespace debets {
 using namespace pers;
 struct Debt {
  Person name;
  double amount;
 };
 void getDebt(Debt &);
 void showDebt(const Debt &);
 double sumDebts(const Debt ar[], int n);
}
