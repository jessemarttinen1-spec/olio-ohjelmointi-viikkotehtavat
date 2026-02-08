#ifndef SEURAAJA_H
#define SEURAAJA_H
#include <string>
#include <iostream>

using namespace std;

class Seuraaja
{
public:
    Seuraaja(string n) : nimi(n), next(nullptr) {}

    string getNimi() {
        return nimi;
    }

    void paivitys(string viesti) {
        cout << nimi << " sai viestin: " << viesti << endl;
    }

    Seuraaja* next;
private:
    string nimi;
};

#endif // SEURAAJA_H
