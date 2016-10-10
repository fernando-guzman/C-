// Formula para calcular:

// El area del triángulo es base por altura entre dos.
// El area del cuadrado es la longitud de un lado al cuadrado.
// El area del rectángulo es base por altura.
// El area del paralelogramo es la longitud de un lado por la de la altura entre el ángulo entre los dos.
// El area del cuadrilatero es la mitad del producto de la multiplicacion de las diagonales por el seno entre ellas.
// El area del circulo es el valor de PI por el radio del círculo.
// El area del elipse es el valor de PI por la longitud del semieje mayor y por la longitud del semieje menor


#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // Declaramos las variables que se usaran durante la
    // ejecución del programa


    int opcion;
    int resultado, base, altura, lado, angulo, d1, d2, radio, se_may, se_min;

    const float PI = 3.1416;

    // INICIO

    cout<<"PROGRAMA PARA CALCULAR AREAS" \
    <<endl<< \
    "_____________________________________" \
    <<endl<<endl;


    cout<< \
    "1) Triángulo"<<endl<< \
    "2) Cuadrado"<<endl<< \
    "3) Rectángulo"<<endl<< \
    "4) Paralelogramo"<<endl<< \
    "5) Cuadrilatero"<<endl<< \
    "6) Circulo"<<endl<< \
    "7) Elipse"<<endl;

    cout<<"_____________________________________"<<endl;


    cout<<"Ingresa el número de la figura de la que quieras calcular el área:"<<endl;
    cin>>opcion;

    cout<<"..."<<endl;

    switch(opcion)
    {
        case 1:
            cout<<"AREA DEL TRIANGULO"<<endl<<endl;
            cout<<"Ingresa la longitud de la base (cm):"<<endl;
            cin>>base;
            cout<<"Ingresa la longitud de la altura (cm):"<<endl;
            cin>>altura;

            resultado = (base * altura) / 2;

        break;
        case 2:
            cout<<"AREA DEL CUADRADO"<<endl<<endl;
            cout<<"Ingresa la longitud de uno de los lados (cm):"<<endl;
            cin>>lado;

            resultado = (lado * lado);
        break;
        case 3:
            cout<<"AREA DEL RECTANGULO"<<endl<<endl;
            cout<<"Ingresa la longitud de la base (cm):"<<endl;
            cin>>base;
            cout<<"Ingresa la longitud de la altura (cm):"<<endl;
            cin>>altura;

            resultado = base * altura;
        break;
        case 4:
            cout<<"AREA DEL PARALELOGRAMO"<<endl<<endl;
            cout<<"Ingresa la longitud de un lado del paralelogramo (cm):"<<endl;
            cin>>lado;
            cout<<"Ingresa la longitud de la altura del paralelogramo (cm):"<<endl;
            cin>>altura;
            cout<<"Ingresa el angulo entre las dos longitudes:"<<endl;
            cin>>angulo;

            resultado = (lado * altura) / 2;
        break;
        case 5:

            cout<<"AREA DEL CUADRILATERO"<<endl<<endl;
            cout<<"Ingresa la longitud de la primera diagonal (cm):"<<endl;
            cin>>d1;
            cout<<"Ingresa la longitud de la segunda diagonal (cm):"<<endl;
            cin>>d2;
            cout<<"Ingresa el ángulo entre las dos diagonales:"<<endl;
            cin>>angulo;

            resultado = ((d1*d2) / 2) / sin(angulo);
        break;
        case 6:
            cout<<"AREA DEL CIRCULO"<<endl<<endl;
            cout<<"Ingresa el valor del radio (cm):"<<endl;
            cin>>radio;

            resultado = PI * radio;
            resultado = sqrt(resultado);
        break;
        case 7:
            cout<<"AREA DEL ELIPSE"<<endl<<endl;
            cout<<"Ingresa el valor del semieje mayor (cm):"<<endl;
            cin>>se_may;

            cout<<"Ingresa el valor del semieje menor (cm):"<<endl;
            cin>>se_min;

            resultado = PI * (se_may * se_min);
        break;
    }

    cout<<"area: "<<resultado<<" cm"<<endl;



    return 0;
}
