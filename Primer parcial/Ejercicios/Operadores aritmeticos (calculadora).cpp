#include <iostream>

using namespace std;

int main()
{

    /*
        OPERADORES ARIMETICOS

        SUMA             -> +
        RESTA            -> -
        MULTIPLICACION   -> *
        DIVISION         -> /
        MODULO           ->  %

    */
    
    cout<<"CALCULADORA"<<endl;
    cout<<"_______________________"<<endl;   
    cout<<"1.- Suma"<<endl;
    cout<<"2.- Resta"<<endl;
    cout<<"3.- Multiplicacion"<<endl;
    cout<<"4.- Division"<<endl;
    cout<<"_______________________"<<endl;
    
 	int opcion;
 	
 	cout<<"Escribe el numero de la operacion que quieres realizar:"<<endl;
 	cin>>opcion;
 	
 	float val_1, val_2, resultado;
 	
 	#define OPCION_SUMA	 				(1)
 	#define OPCION_RESTA	 			(2)
 	#define OPCION_MULTIPLICACION	 	(3)
 	#define OPCION_DIVISION	 			(4)

    switch(opcion)
    {
        case OPCION_SUMA:
            cout<<"SUMA"<<endl;

            cout<<"Ingresa el primer valor:"<<endl;
            cin>>val_1;

            cout<<"Ingresa el segundo valor:"<<endl;
            cin>>val_2;

            resultado = val_1 + val_2;
            cout<<"Resultado: "<<resultado<<endl;
         break;
        case OPCION_RESTA:
            cout<<"RESTA"<<endl;

            cout<<"Ingresa el primer valor:"<<endl;
            cin>>val_1;

            cout<<"Ingresa el segundo valor:"<<endl;
            cin>>val_2;

            resultado = val_1 - val_2;
            cout<<"Resultado: "<<resultado<<endl;
         break;
        case OPCION_MULTIPLICACION:
            cout<<"MULTIPLICACION"<<endl;

            cout<<"Ingresa el primer valor:"<<endl;
            cin>>val_1;

            cout<<"Ingresa el segundo valor:"<<endl;
            cin>>val_2;

            resultado = val_1 * val_2;
            cout<<"Resultado: "<<resultado<<endl;
         break;
        case OPCION_DIVISION:
            cout<<"DIVISION"<<endl;

            cout<<"Ingresa el primer valor:"<<endl;
            cin>>val_1;

            cout<<"Ingresa el segundo valor:"<<endl;
            cin>>val_2;

            resultado = val_1 / val_2;
            cout<<"Resultado: "<<resultado<<endl;
         break;
    }


    return 0;
}
