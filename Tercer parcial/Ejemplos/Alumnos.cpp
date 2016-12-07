#include <iostream>

struct Alumno 
{
	char nombre[30];
	int nota1, nota2, nota3, promedio;
};

void llenarAlumnos(Alumno A[], int N);
void mostrarAlumnos(Alumno A[], int N);
void ordenarPromedios(Alumno A[], int N);

int main()
{
	Alumno alumnos[30];
	
	int N = 4;
	
	llenarAlumnos(alumnos, N);
	ordenarPromedios(alumnos, N),
	
	cout<<"ORDEN DE MERITO"<<endl;
	mostrarAlumnos(alumnos, N);
	
	return false;
}

void llenarAlumnos(Alumno A[], int N)
{
	for(int i = 0; i<N; i++)
	{
		cout<<"ALUMNO "<<i+1<<endl;
		cout<<"Nombre: ";
		cin.getline(A[i].nombre, 30);
		
		cout<<"Nota 1: ";
		cin>>A[i].nota1;
		cin.ignore();
		
		cout<<"Nota 2: ";
		cin>>A[i].nota2;
		cin.ignore();
		
		cout<<"Nota 3: ";
		cin>>A[i].nota3;
		cin.ignore();
		cout<<endl;
		A[i].promedio = (A][i].nota1 + A[i].nota2 + A[i].nota3) / 3;
	}
}

void mostrarAlumnos(Alumno A[], int N)
{
	for(int i = 0; i < N; i++)
	{
		cout<<"Nombre: "<<A[i].nombre<<endl;
		cout<<"Promedio: "<<A[i].promedio<<endl;
		cout<<endl;
	}
}

void ordenarPromedios(Alumno A[], int N)
{
	for(int i = 1; i <= N; i++)
	{
		for(int j = 0; j < N-1; j++)
		{
			if(A[j].promedio < A[j+i].promedio)
			{
				Alumno aux = A[j];
				A[j] = A[j+1];
				A[j+1] = aux
			}
		}
	}
}



