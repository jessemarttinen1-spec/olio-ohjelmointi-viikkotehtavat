#include "pankkitili.h"
#include <iostream>

using namespace std;


Pankkitili::Pankkitili(string nimi)
{
    omistaja = nimi;
    saldo = 0;
}

double Pankkitili::getBalance()
{
    return saldo;
}

bool Pankkitili::deposit(double summa)
{
    if (summa <= 0)
        return false;

    saldo += summa;
    return true;
}

bool Pankkitili::withdraw(double summa)
{
    if (summa <= 0)
        return false;


    if (summa > saldo)
        return false;

    saldo -= summa;
    return true;
}

