#include <iostream>
#include <cstdint>

#include "pedirMovimiento.h"
//#include "cambiarfilas.h"
//#include "verificarcolision.h"
//#include "contarbits.h"

#include "creartablero.h"
#include "imprimirTablero.h"
#include "pruebas.h"
#include "eliminarTablero.h"

using namespace std;

int main() {
    cout << "BIENVENIDO A UNA VERSION BARATA DE TETRIS"<<endl;
    cout << "Made by: Santi Garcia y Mary Ahumada"<<endl;
    unsigned short int alto = 0,bits = 0;   // Si usamos uint8_t o char el tablero se pone raro
    cout << "Ingrese el alto: ";   // No usa el tamaño si dado, si no otro...
    cin >> alto;                   // Creo que tiene ver con ASCII.
    /*
    VALIDACIONES de alto
    */
    cout << "Ingrese el ancho (multiplo de 8): ";
    cin >> bits;
    /*
    VALIDACIONES de bits
    */
    unsigned short int byte = bits/8;
    uint8_t** tablero = nullptr;

    tablero = crearTablero(alto,byte);
    prueba1(tablero); //aca seria escoger pieza y aparecerla en el tablero
    uint8_t* piezaS = new uint8_t[3]{ 0, 0b00011000, 0b00110000 };
    short turnos = 5;
    imprimirTablero(tablero, piezaS, alto, byte);//muestra por primera vez el tablero y la pieza
    for (short i=0;i < turnos;i++){ //aca seria un while gameOver() != true

        pedirMovimiento(tablero, piezaS);
        imprimirTablero(tablero, piezaS, alto, byte);

    }
    eliminarTablero(tablero,alto);
    delete[] piezaS; //Esto se debe colocar cuando pase una colision, luego crear otra pieza

    return 0;
}
/*
int main() {
    unsigned short int a = 7; //0b00111
    unsigned short int * p = &a;
    cout << "el numero " << a << " tiene "
         << contarBits(p)
         << " bits." <<endl;
    return 0;
}
*/
