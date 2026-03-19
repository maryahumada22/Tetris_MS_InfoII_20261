#include <iostream>
#include <cstdint>

using namespace std;

void eliminarTablero(uint8_t** matriz, unsigned short int filas) {
    for (int i = 0; i < filas; i++) {
        delete[] matriz[i];
    }
    delete[] matriz;

    cout << "Memoria del tablero liberada con exito." << endl;
}
