#include <iostream>

using namespace std;

int main()
{
    /* SECUENCIAS DE ESCAPE
    \n -> salto de línea
    \b -> retroceso
    \r -> retorno de carro
    \t -> tabulador */

    cout << "SALTO DE LINEA: \n" << endl;
    cout << "Hola" << endl;

    cout << "\n" << endl;

    cout << "RETROCESO: \n";
    cout << "\bHola" << endl;

    cout << "\n";

    cout << "RETORNO DE CARRO: \n";
    cout << "Hola\rAdios";

    cout << "\n";

    cout << "TABULADOR: \n";
    cout << "SALUDO 1\t\tSALUDO 2\t\tSALUDO 3\n";
    cout << "hola\t\thola\t\thola";


    return 0;
}

