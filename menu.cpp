#include <iostream>
#include "menu.h"
using namespace std;

void menu()
{
    int opcion;

    cout << "MENU PRINCIPAL!"<< endl;
    cout << "1 - UN JUGADOR" << endl;
    cout << "2 - DOSJUGADOR" << endl;
    cout << "3- ESTADISTICAS" << endl;
    cout << "4- CREDITOS" << endl;
    cout << "0- SALIR" << endl;

    cin >> opcion;

    switch(opcion)
    {

    case 0:
        return;
        break;
    }
}
