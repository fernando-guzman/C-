// DATOS:

// 2 arreglos, para cada arreglo solicitar:

// Elementos del arreglo
// Valor de cada elemento

// Mostrar un arreglo con los valores almacenados
// en cada arreglo

#include <iostream>

using namespace std;


int main()
{
	// Estas dos variables se necesitan antes de definir el arreglo
	// Después de solicitar el número de elementos y almacenarlo
	// podremos definir el tamaño del arreglo.
	
	int elementos_a1, elementos_a2, elementos_a3;
	
	
	
	// Solicitamos el numero de elementos del arrelgo
	
	cout<<"Ingresa el numero del elementos para el arreglo 1: ";
	cin>>elementos_a1;
	
	
	// Declaramos el primer arreglo con el numero de elementos ingresado previamente
	
	int A1[elementos_a1];
	
	// Solicitamos el valor para cada elemento en el arreglo
	
	for(int i = 0; i < elementos_a1; i++)
	{
		cout<<"Valor del elemento en el indice "<<i<<':'<<' ';
		cin>>A1[i];
	}
	
	cout<<endl<<endl;
	
	
	
	
	
	// Repetimos el mismo proceso con el segundo arreglo
	
	cout<<"Ingresa el numero del elementos para el arreglo 2: ";
	cin>>elementos_a2;
	
	
	int A2[elementos_a2];
	
	for(int i = 0; i < elementos_a2; i++)
	{
		cout<<"Valor del elemento en el indice "<<i<<':'<<' ';
		cin>>A2[i];
	}
	
	cout<<endl<<endl;
	
	
	
	
	// Formamos un tercer arreglo con los dos datos, necesitaremos
	// calcular el tamaño del tercero obteniendo y sumando el tamaño
	// del primero y el segundo
	
	elementos_a3 = elementos_a1 + elementos_a2;
	
	int A3[elementos_a3], elemento_actual = 0, valor_actual = 0;
	
	cout<<"ARREGLO FORMADO"<<endl;
	
	
	while(elemento_actual < elementos_a3)
	{
		if(valor_actual < elementos_a1)
		{
			cout<<"Asignando "<<A1[valor_actual]<<" a A3"<<'['<<elemento_actual<<']'<<"..."<<endl;
			A3[elemento_actual] = A1[valor_actual];
		}
		else break;

		valor_actual++;
		elemento_actual++;
	}
	
	valor_actual = 0;
	
	while(elemento_actual < elementos_a3)
	{
		if(valor_actual < elementos_a2)
		{
			cout<<"Asignando "<<A2[valor_actual]<<" a A3"<<'['<<elemento_actual<<']'<<"..."<<endl;
			A3[elemento_actual] = A2[valor_actual];
		}
		else break;

		valor_actual++;
		elemento_actual++;
	}
	
	for(int i = 0; i < elementos_a3; i++)
	{
		cout<<A3[i]<<' ';
	}	
	
	return false;
}
