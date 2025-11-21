#include <iostream>
#include <array>
using namespace std;

struct antarctica_years_end{
    int year;
};

int main(void)
{
    antarctica_years_end s01, s02, s03;
    s01.year = 1998;

    antarctica_years_end *pa = &s02;
    pa->year = 1999;

    antarctica_years_end trio[3]; // array of 3 structures
    trio[0].year = 2003;


    cout << trio->year << endl;
    cout << "-------------arp[1]->year  s02" << endl;

    const antarctica_years_end *arp[3] = {&s01, &s02, &s03};
    cout << arp[1]->year << endl;

    cout << "-------------arp是 *arp[0]   (*ppa) 是 arp[0]" << endl;
    cout << "-------------**ppa =arp   (*ppa) 是 arp[0]" << endl;
    const antarctica_years_end **ppa =arp;
    const antarctica_years_end **ppb =arp;
    // auto ppb = arp;

    cout << arp[0]->year << endl;
    cout << (*arp)->year << endl;
    cout << (*ppa)->year << endl;
    cout << (*(ppb+1))->year << endl;


    return 0;
}