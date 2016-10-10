#include <iostream>

using namespace std;

int main()
{
    /*

    JERARQUIA DE LOS OPERADORES

    1.- Parentesis
    2.- Multiplicacion, division y modulo
    3.- Suma y resta

    */

    cout << 14-8 / 2*3 + 1 << endl;     // 3
    cout << (14 - 8) / 2*3 + 1 << endl; // 10
    cout << 14-(8 / 2*3) + 1 << endl;   // 3
    cout << 14-8 / 2*(3+1) << endl;     //  -2
    cout << (14-8)/2*(3+1) << endl;     // 12


    return 0;
}

