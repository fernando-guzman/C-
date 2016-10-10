#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // Declaramos las variables que se usaran durante la
    // ejecución del programa


    int opcion;
    int resultado, radio, se_may, se_min;

    const float PI = 3.1416;

    // INICIO

    cout<<"PROGRAMA PARA CALCULAR AREAS" \
    <<endl<< \
    "_____________________________________" \
    <<endl<<endl;


    cout<< \
    "1) Circulo"<<endl<< \
    "2) Elipse"<<endl<< \
    "3) Esfera"<<endl;

    cout<<"_____________________________________"<<endl;


    cout<<"Ingresa el número de la figura de la que quieras calcular el área:"<<endl;
    cin>>opcion;

    cout<<"..."<<endl;

    switch(opcion)
    {
        case 1:
            cout<<"AREA DEL CIRCULO"<<endl<<endl;
            cout<<"Ingresa el valor del radio (cm):"<<endl;
            cin>>radio;

            resultado = PI * radio;
            resultado = sqrt(resultado);
        break;
        case 2:
            cout<<"AREA DEL ELIPSE"<<endl<<endl;
            cout<<"Ingresa el valor del semieje mayor (cm):"<<endl;
            cin>>se_may;

            cout<<"Ingresa el valor del semieje menor (cm):"<<endl;
            cin>>se_min;

            resultado = PI * (se_may * se_min);
        break;
		case 3:
			cout<<"AREA DE LA ESFERA"<<endl<<endl;
            cout<<"Ingresa el valor del radio (cm):"<<endl;
            cin>>radio;
            
			resultado = 4 * PI * (radio * radio);
		break;       
    }

    cout<<"area: "<<resultado<<" cm"<<endl;



    return 0;
}
