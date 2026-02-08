#include <iostream>
#include "build/notifikaattori.h"
#include "build/seuraaja.h"
using namespace std;

int main()
{
    Notifikaattori notif;

    Seuraaja a("Anna");
    Seuraaja b("Pekka");
    Seuraaja c("Liisa");

    notif.lisaa(&a);
    notif.lisaa(&b);
    notif.lisaa(&c);

    notif.tulosta();
    cout << endl;

    notif.postita("Uusi tapahtuma!");
    cout << endl;

    notif.poista(&b);

    notif.postita("Toinen viesti");

    return 0;
}
