#include <iostream>
#include "bajarpieza.h"
#include "moverder.h"
#include "moverizq.h"
// rotarpieza.h

using namespace std;

void pedirMovimiento(){
    char mov = 0;
    cout << "a=Left|d=Right|s=Down|w=Rotate: ";
    cin >> mov;
    switch (mov) {
        case 'a':
            cout << "Izquierda" << endl;
            //moverIzq();
            break;
        case 'd':
            cout << "Derecha" << endl;
            //moverDer();
            break;
        case 's':
            cout << "Bajar" << endl;
            //bajarPieza();
            break;
        case 'w':
            cout << "Rotar" << endl;
            //rotar pieza
            break;
        default:
            cout << "Opcion no valida" << endl;
    }
}
