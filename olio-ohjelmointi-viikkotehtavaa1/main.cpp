#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int maxnum){

    int luku = rand() % maxnum + 1;
    int arvaus;
    int yritykset = 0;

    while (true){
    cout << "Anna Arvauksesi" << endl;
    cin >> arvaus;

    yritykset ++;

    if (arvaus == luku){
        cout << "Arvasit oikein!" << endl;
        cout << "Sinulla meni " << yritykset << " yritysta" << endl;
        break;
    } else if (arvaus > luku){
        cout << "Liian iso" << endl;
    } else if (arvaus < luku){
        cout << "Liian pieni" << endl;
    }
    }
}

int main () {
    srand(time(NULL));

    game(80);


    return 0;
}
