/*
	5 productos

	- nombre
	- precio
	- total a pagar

	- producto mas caro
	- producto mas barato
*/

#include <iostream>

using namespace std;

struct Producto
{
	char nombre[30];
	float precio;
};

void solicitarProductos(Producto P[], int);
void mostrarProductos(Producto P[], int);

Producto buscarMasCaro(Producto P[], int);
Producto buscarMasBarato(Producto P[], int);

int main()
{
    setlocale(LC_ALL, "Spanish");

	Producto productos[5];

	int N = 5;

	solicitarProductos(productos, N);
	mostrarProductos(productos, N);

	Producto mas_caro;
	Producto mas_barato;

	mas_caro = buscarMasCaro(productos, N);
	mas_barato = buscarMasBarato(productos, N);

	cout<<endl<<"PRODUCTO MÁS CARO"<<endl;
	cout<<"\tNombre: "<<mas_caro.nombre<<endl;
	cout<<"\tPrecio: "<<mas_caro.precio<<endl;

	cout<<endl<<"PRODUCTO MÁS BARATO"<<endl;
	cout<<"\tNombre: "<<mas_barato.nombre<<endl;
	cout<<"\tPrecio: "<<mas_barato.precio<<endl;

	return false;
}


void solicitarProductos(Producto P[], int N)
{
	for(int i = 0; i < N; i++)
	{
		if(i > 0)
		{
			cout<<endl;
			cin.ignore();
		}

		cout<<"PRODUCTO No. "<<i+1<<endl;
		cout<<"\tNombre: ";

		cin.getline(P[i].nombre, 30);

		cout<<"\tPrecio: ";
		cin>>P[i].precio;
	}
}

void mostrarProductos(Producto P[], int N)
{
	for(int i = 0; i < N; i++)
	{
		cout<<endl<<"PRODUCTO No. "<<i+1<<endl;
		cout<<"\tNombre: "<<P[i].nombre<<endl;
		cout<<"\tPrecio: "<<P[i].precio<<endl;
	}
}

Producto buscarMasBarato(Producto P[], int N)
{
	Producto masBarato = P[0];
    for(int i=1;i<N;i++){
        if(P[i].precio < masBarato.precio){
            masBarato = P[i];
        }
    }
    return masBarato;
}

Producto buscarMasCaro(Producto P[], int N)
{
	Producto masCaro = P[0];
    for(int i=1;i<N;i++){
        if(P[i].precio > masCaro.precio){
            masCaro = P[i];
        }
    }
    return masCaro;
}

