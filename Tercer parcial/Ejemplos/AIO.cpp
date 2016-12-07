#include <iostream>
#include <cmath>

using namespace std;

// Constantes usadas a lo largo del programa

#define F_AGREGAR_CONTACTO				(1)
#define F_MOSTRAR_CONTACTOS				(2)
#define F_CAMBIAR_DATOS_PERSONALES		(3)
#define F_MOSTRAR_DATOS_PERSONALES		(4)
#define F_MOSTRAR_MINI_APLICACIONES		(5)
#define F_MOSTRAR_LISTA_DE_FUNCIONES	(6)

#define MAX_CONTACTOS					(256)

// Declaración de funciones

void iniciar(char);
void ejecutarFuncion(int);

struct Usuario{
	
	char nombre[64];
	
	int edad;

	char correo[128];
};

// 1 usuario por ejecución
Usuario principal;

char contactos[256][64];

// Almacena el número del último contacto agregado
int ultimo_contacto = -1;


int main()
{
	setlocale(LC_ALL, "spanish");

	cout<<"EJERCICIO TODO EN UNO"<<endl;
	cout<<"--------------------------------"<<endl;
	cout<<endl;
	cout<<"Escribe tu nombre para usarlo durante la ejecución del programa: ";
	cin.getline(principal.nombre, 64);
	cout<<"--------------------------------"<<endl<<endl<<endl;
	
	
	cout<<"Hola, "<<principal.nombre<<'!'<<endl;
	cout<<"Bienvenido a tu aplicación personal."<<endl;
	cout<<"--------------------------------"<<endl;
	
	// Iniciamos la ejecución del programa solicitando un numero hasta que se presione 0
	iniciar('0');
		
	return false;
}


void iniciar(char fin_char)
{
	char opcion = '6';

	while(opcion != fin_char)
	{
		
		ejecutarFuncion(opcion);
		
		cout<<endl<<"> ";
		cin>>opcion;
	}
	
	cout<<"Adiós, "<<principal.nombre<<"!";
}

void ejecutarFuncion(int func)
{
	// Una variable tipo char es pasada al llamarse, convertimos su valor
	// a entero tal como es.
	
	func = func - 48;
	
	switch(func)
	{
		case F_AGREGAR_CONTACTO:
			cin.ignore(256,'\n'); 
			
			ultimo_contacto++;
			
			cout<<endl<<"Agregando contacto #"<<ultimo_contacto+1<<"..."<<endl;
			cout<<"Nombre: ";
			cin.getline(contactos[ultimo_contacto], 64);
			cout<<endl<<"¡Contacto agregado!"<<endl;
		break;
		
		case F_MOSTRAR_CONTACTOS:
			
			if(contactos[0][0] == '\0')
			{
				cout<<"No hay ningún contacto en tu lista aún."<<endl;
				break;
			} 
			
			cout<<endl<<"LISTA DE CONTACTOS"<<endl;
			for(int i = 0; i <= ultimo_contacto; i++)
			{
				cout<<i+1<<") "<<contactos[i]<<endl;
			}
		break;
		
		case F_CAMBIAR_DATOS_PERSONALES:
			cin.ignore(256,'\n'); 
			
			cout<<"Nombre: ";
			cin.getline(principal.nombre, 64);
			
			cout<<"Edad: ";
			cin>>principal.edad;
			
			cin.ignore(256,'\n'); 
			
			cout<<"Correo: ";
			cin>>principal.correo;
			
			cin.ignore(256,'\n'); 
			
			cout<<"¡Tus datos han sido actualizados!"<<endl;
		break;	
		
		case F_MOSTRAR_DATOS_PERSONALES:
			cout<<endl<<"Nombre: "<<principal.nombre<<endl;
			cout<<"Edad: "<<principal.edad<<" años"<<endl;
			cout<<"Correo: "<<principal.correo<<endl;
		break;
			
		case F_MOSTRAR_MINI_APLICACIONES:
			int mini_aplicacion;
			
			cout<<endl<<"MINI APLICACIONES"<<endl;
			cout<<"1) Verificar si un numero es par"<<endl;
			cout<<"2) Verificar si un numero es impar"<<endl;
			
			cout<<'\t'<<">> ";
			cin>>mini_aplicacion;
			
			if(mini_aplicacion == 1)
			{
				int numero;
				
				cout<<'\t'<<"Escribe un numero: ";
				cin>>numero;
				
				if(numero % 2 == 0) cout<<'\t'<<numero<<" es un número par."<<endl;
				else cout<<'\t'<<"No es par"<<endl;
			
			}
			else if(mini_aplicacion == 2)
			{
				int numero;			
				cout<<'\t'<<"Escribe un numero: ";
				cin>>numero;
				
				if(numero % 2 == 1) cout<<'\t'<<numero<<" es un número impar."<<endl;
				else cout<<'\t'<<"No es impar"<<endl;
	
			}
			else
			{
				cout<<'\t'<<"Opción incorrecta."<<endl;
			}
			
			cout<<'\t'<<"Ejecución finalizada.";
		break;	
				
		case F_MOSTRAR_LISTA_DE_FUNCIONES:
			cout<<"FUNCIONES:"<<endl<<endl;
			cout<<"1) "<<"Agregar un contacto"<<endl;
			cout<<"2) "<<"Mostrar lista de contactos"<<endl;
			cout<<"3) "<<"Cambiar tus datos personales"<<endl;
			cout<<"4) "<<"Mostrar tus datos personales"<<endl;
			cout<<"5) "<<"Mostrar mini-aplicaciones"<<endl;
			cout<<"6) "<<"Mostrar listas de funciones"<<endl;
			cout<<endl<<'\t'<<"*** 0 - salir"<<endl;
		break;
		
		default:
			cout<<"ERROR INESPERADO: Se ha ejecutado una función que no existe. (func_id: "<<func<<")";
		break;
		
	}
}


