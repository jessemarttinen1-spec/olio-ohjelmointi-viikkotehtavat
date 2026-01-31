#include <iostream>
#include <string>
#include "pankkitili.h"
#include "luottotili.h"
#include "asiakas.h"

using namespace std;


int main()
{
    cout << "Pankkitilin testaus" << endl;

    Pankkitili tili("Jesse");

    cout << tili.deposit(100) << endl;
    cout << tili.withdraw(25) << endl;
    cout << tili.withdraw(100) << endl;
    cout << tili.getBalance() << endl;


    cout << "Luottotilin testaus" << endl;

    Luottotili luotto("OnMa", 500);

    cout << luotto.withdraw(300) << endl;
    cout << luotto.getBalance() << endl;

    cout << luotto.withdraw(300) << endl;
    cout << luotto.deposit(200) << endl;
    cout << luotto.getBalance() << endl;

    cout << luotto.deposit(250) << endl;
    cout << luotto.getBalance() << endl;

    cout << "Asiakkaan testaus" << endl;

    Asiakas nimi("Jesse Marttinen", 500);

    nimi.talletus(200);
    nimi.nosto(120);
    nimi.showSaldo();

    nimi.luotonNosto(300);
    nimi.luotonMaksu(200);
    nimi.showSaldo();

    return 0;
}

