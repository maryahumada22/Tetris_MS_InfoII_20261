#include <iostream>

#include <bitset>
#include <cstdint>

#include "problema_2.h"
#include "bajarpieza.h"
#include "cambiarfilas.h"
#include "moverder.h"
#include "moverizq.h"
#include "verificarcolision.h"
#include "contarbits.h"

#include "creartablero.h"

using namespace std;

int main() {
    unsigned short int a = 7; //0b00111
    unsigned short int * p = &a;
    cout << "el numero " << a << " tiene "
         << contarBits(p)
         << " bits." <<endl;
    return 0;
}
/*
int main() {
    uint8_t a = 0b0111;  // 7 -- 0b0111
    uint8_t b = 0b0100;  // 4 -- 0b0100
    // Bitwise AND
    uint8_t bAnd = a & a;
    // Bitwise OR
    uint8_t bOr = a | b;
    // Bitwise XOR
    uint8_t bXor = a ^ b;
    // Bitwise NOT
    uint8_t bNot = ~b;
    // Bitwise Left Shift
    uint8_t bLeft = b << 2;
    // Bitwise Right Shift
    uint8_t bRight = a >> 2;

    // Printing the Results of Bitwise Operators
    cout << "a: " << bitset<8>(a) << " b: " << bitset<8>(b) << endl;
    cout << "AND: " << bAnd << endl;
    cout << "AND: " << bitset<8>(bAnd) << endl;
    cout << "OR: " << bitset<8>(bOr) << endl;
    cout << "XOR: " << bitset<8>(bXor) << endl;
    cout << "NOT b: " << bitset<8>(bNot) << endl;
    cout << "Left Shift: " << bitset<8>(bLeft) << endl;
    cout << "Right Shift: " << bitset<8>(bRight) << endl;

    return 0;
}
*/
