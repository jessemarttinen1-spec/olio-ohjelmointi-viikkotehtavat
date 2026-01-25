#include "italianchef.h"
#include "chef.h"
#include <iostream>
#include <cstdlib>

using namespace std;

ItalianChef::ItalianChef(string name)
    :Chef(name),
    flour(0),
    water(0)
{
    cout << "Konstruktori ItalianChef kutsutaan" << endl;
}

ItalianChef::~ItalianChef()
{
    cout << "Destruktori ItalianChef kutsutaan muisti vapautetaan " << endl;
}

bool ItalianChef::askSecret(string guess, int f, int w)
{
    if (guess == password) {
    flour = f;
    water = w;
    makepizza(flour, water);
    cout << "salasana arvattu oikein" << endl;
    return true;

    }
    cout << "salasana vaarin" << endl;
    return false;

}

int ItalianChef::makepizza(int f, int w)
{
    int pizza = 0;
    if (f >= 5 && w >= 5 ){
        pizza = min(f / 5, w / 5);
        cout << " Kokki valmisti " << pizza << " pizzaa "
             << " Jauhoja kaytettiin " << pizza * 5 << " kappaletta "
             << " Vetta kaytettiin " << pizza * 5 << " kappaletta " << endl;

    }
    else {
        cout << " Ainesosia ei ollut tarpeeksi pizzaan " << endl;
    }
    return pizza;
}


