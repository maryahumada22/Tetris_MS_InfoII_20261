#include <iostream>
#include <cstdint>
using namespace std;

void imprimirTablero(uint8_t** tablero,
            unsigned short int filas,
            unsigned short int anchoByte){

    for (short int i=0; i<filas; i++) {
        for (short int j=0; j<anchoByte; j++) {
            for (short int bit=7; bit>=0;bit--) { //vamos de izquierda a derecha
                //no deja usar bit=8; bit>0; mejor bit=7 pa los desplazamientos
                uint8_t valor = (tablero[i][j] >> bit) & 0b001;
                if (valor == 1){
                    cout << "O";
                }
                else{
                    cout << ".";
                }
            }
        }
        cout << endl;
    }
}

