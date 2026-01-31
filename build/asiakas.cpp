#include "asiakas.h"
#include <iostream>

using namespace std;



Asiakas::Asiakas(string nimi, double luotto):
    nimi(nimi),
    kayttotili(nimi),
    luottotili(nimi, luotto)
{

}

string Asiakas::getNimi()
{
    return nimi;
}

void Asiakas::showSaldo(){

    cout <<"Asiakas: " << nimi << endl;
    cout << "Kayttotilin saldo: " << kayttotili.getBalance() << endl;
    cout << "Luottotilin saldo: " << luottotili.getBalance() << endl;
}

bool Asiakas::talletus(double summa)
{
    return kayttotili.deposit(summa);
}

bool Asiakas::nosto(double summa)
{
    return kayttotili.withdraw(summa);
}

bool Asiakas::luotonMaksu(double summa)
{
    return luottotili.deposit(summa);
}

bool Asiakas::luotonNosto(double summa)
{
    return luottotili.withdraw(summa);
}
