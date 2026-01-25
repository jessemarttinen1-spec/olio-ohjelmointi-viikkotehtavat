#include "chef.h"
#include <iostream>
#include <cstdlib>

Chef::Chef(string n) {
    cout << " Konstruktori Chef kutsutaan " <<endl;
    chefName = n;
    cout << "Chef" << chefName << endl;
}


int Chef::makeSalad(int ingredients)
{
    int portions = ingredients / 5;
    cout << chefName << "ainesosilla" << ingredients << "pystyy tehda salaattia" << portions << "kappaletta" << endl;
    return portions;
}

int Chef::makeSoup(int ingredients)
{
    int portions = ingredients / 3;
    cout << chefName << "ainesosilla" << ingredients << "pystyy tehda soppaa" << portions << "kappaletta" << endl;
    return portions;
}
Chef::~Chef()
{
    cout << "destruktori Chef kutsutaan muisti vapautetaan" << endl;
}
