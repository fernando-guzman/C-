#include <iostream>

using namespace std;

#define LIMITE_EMPLEADOS		6
#define TAMANO_NOMBRE			64

#define PUESTO_OBRERO			0
#define PUESTO_JEFE				1

#define PRESTACION_OBRERO 		(0.10)
#define PRESTACION_JEFE			(0.20)

int main()
{
	
	char nombre[LIMITE_EMPLEADOS][TAMANO_NOMBRE];
	int puesto[LIMITE_EMPLEADOS];
	
	double sueldo[LIMITE_EMPLEADOS], sueldo_total[LIMITE_EMPLEADOS];
	
	for(int e = 0; e < LIMITE_EMPLEADOS; e++)
	{
		// Ignorar el salto de linea a partir de la segunda repeticion
		
		if(e > 0) cin.ignore(256, '\n');
		
		cout<<"EMPLEADO NO. "<<e+1<<endl;
		cout<<"_______________________"<<endl;
		
		cout<<"Ingresa el nombre del empleado: ";
		cin.getline(nombre[e], TAMANO_NOMBRE);
		
		// Verificar que el nombre del empleado haya sido ingresado
		
		if(nombre[e][0] == '\0')
		{
			cout<<"El nombre del empleado no puede estar vacio."<<endl;
			return false;	
		}
		
		
		//	cin.ignore(256, '\n');
		
		cout<<"Ingresa el puesto del empleado (0 - obrero, 1 - jefe): ";
		cin>>puesto[e];
		
		cout<<"Ingresa el sueldo del empleado: ";
		cin>>sueldo[e];

		
		switch(puesto[e])
		{
			case PUESTO_OBRERO: sueldo_total[e] = sueldo[e] + (sueldo[e] * PRESTACION_OBRERO);
			break;
			
			case PUESTO_JEFE: sueldo_total[e] = sueldo[e] + (sueldo[e] * PRESTACION_JEFE);
			break;
			
			default: 
				cout<<"Puesto invalido - el sueldo no se puede calcular."<<endl;
				return false;
			break;
		}				
	}
	
	// Mostrar a los jefes primero
	
	cout<<endl<<endl<<"JEFES"<<endl;
	cout<<"______________"<<endl;
	
	for(int e = 0; e < LIMITE_EMPLEADOS; e++)
	{
		if(puesto[e] == PUESTO_JEFE)
		{
			cout<<"EMPLEADO NO. "<<e+1<<endl;
			cout<<"Nombre: "<<nombre[e]<<endl;
			cout<<"Prestacion: "<<PRESTACION_JEFE * 100<<'%'<<endl;
			cout<<"Sueldo: "<<sueldo_total[e]<<endl<<endl;
		}
		else continue;
	}
	
	
	cout<<endl<<endl<<"OBREROS"<<endl;
	cout<<"______________"<<endl;
	
	for(int e = 0; e < LIMITE_EMPLEADOS; e++)
	{
		if(puesto[e] == PUESTO_OBRERO)
		{
			cout<<"EMPLEADO NO. "<<e+1<<endl;
			cout<<"Nombre: "<<nombre[e]<<endl;
			cout<<"Prestacion: "<<(PRESTACION_OBRERO * 100)<<'%'<<endl;
			cout<<"Sueldo: "<<sueldo_total[e]<<endl<<endl;
		}
		else continue;
	}
	
	return false;
}
