#include <iostream>
#include "menu.h"
using namespace std;

void menu()
{
    int opcion;
    
    do{
        cout << "MENU PRINCIPAL!"<< endl;
        cout << "1 - UN JUGADOR" << endl;
        cout << "2 - DOS JUGADOR" << endl;
        cout << "3 - ESTADISTICAS" << endl;
        cout << "4 - CREDITOS" << endl;
        cout << "0 - SALIR" << endl;

        cin >> opcion;

        switch(opcion)
        {

        case 0:
            return;
            break;
        }
    }while(opcion != 0);
}
