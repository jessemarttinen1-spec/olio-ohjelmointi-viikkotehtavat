#ifndef NOTIFIKAATTORI_H
#define NOTIFIKAATTORI_H
#include "seuraaja.h"

using namespace std;

class Notifikaattori
{
public:
    Notifikaattori(): seuraajat(nullptr) {}

    void lisaa(Seuraaja* s) {
        s->next = seuraajat;
    }


    void poista(Seuraaja* s) {
        Seuraaja* nykyinen = seuraajat;
        Seuraaja* edellinen = nullptr;

        while (nykyinen != nullptr) {
            if (nykyinen == s) {
                if (edellinen == nullptr) {
            seuraajat = nykyinen->next;
            } else {
                edellinen->next = nykyinen->next;
            }
            nykyinen->next = nullptr;
            return;
    }
            edellinen = nykyinen;
            nykyinen = nykyinen->next;
        }
    }

    void postita(string viesti) {
        Seuraaja* nykyinen = seuraajat;
        while (nykyinen != nullptr) {
            nykyinen->paivitys(viesti);
            nykyinen = nykyinen->next;

        }
    }
    void tulosta() {
        Seuraaja* nykyinen = seuraajat;
        cout << "Seuraajat:" << endl;
        while (nykyinen != nullptr) {
            cout << "- " << nykyinen->getNimi() << endl;
            nykyinen = nykyinen->next;
        }
    }
private:
    Seuraaja* seuraajat;
};

#endif // NOTIFIKAATTORI_H
