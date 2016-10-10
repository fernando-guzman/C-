#include <iostream>

using namespace std;

int main()
{
    // OPERADORES LOGICOS

    // Y -> && -> Si los 2 valores son verdaderos
    // O -> || -> Si uno de ellos es verdadero
    // NO -> !

    // Igualdad -> ==
    // Diferente -> !=
    // Menor -> <
    // Mayor -> >
    // Menor igual -> <=
    // Mayor igual -> >=

    // En expresiones booleanas la precedencia es de derecha
    // a izquierda y mientras que en las arimeticas es de izquierda o
    // derecha



    bool r1 = (true&&true) || false; // TRUE
    bool r2 = (5==5) || (6!=2) && !(1==1); // TRUE
    bool r3 = false && true || false; // FALSE
    bool r4 = (5<3) || (3>=3) || true; // TRUE
    bool r5 = ((3<=3)) && (5<5) || false); // FALSE

    cout<<r1<<endl;
    cout<<r2<<endl;
    cout<<r3<<endl;
    cout<<r4<<endl;
    cout<<r5<<endl;

    return 0;
}
