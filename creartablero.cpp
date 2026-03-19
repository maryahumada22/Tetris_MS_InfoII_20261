#include <iostream>
#include <cstdint>
#include "creartablero.h"

using namespace std;

void crearTablero() {
    uint8_t alto=0, ancho=0;
    uint8_t** tablero;
    cout << "Alto: ";
    cin >> alto;

    do {
        cout << "Ancho (multiplo de 8): ";
        cin >> ancho;
    } while (ancho < 8 || ancho % 8 != 0);

    uint8_t colsBytes = ancho / 8;

    tablero = new uint8_t*[alto];
    for (int i = 0; i < alto; i++) {
        tablero[i] = new uint8_t[colsBytes];
        for (int j = 0; j < colsBytes; j++)
            tablero[i][j] = 0;
    }
}
