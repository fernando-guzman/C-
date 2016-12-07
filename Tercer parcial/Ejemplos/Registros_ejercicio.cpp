#include <iostream>
#include <string>

using namespace std;

// nombre, semestre, carrera, asignatura favorita

struct alumno
{
    string nombre, carrera, asignatura_favorita;
    int semestre;
};

int main()
{
    alumno a;

    cout<<"Ingresa tu nombre: ";
    cin>>a.nombre;
    cin.ignore('\n', 256);

    cout<<"Ingresa tu semestre: ";
    cin>>a.semestre;
    cin.ignore('\n', 256);

    cout<<"Ingresa tu carrera: ";
    cin>>a.carrera;
    cin.ignore('\n', 256);

    cout<<"Ingresa tu asignatura favorita: ";
    cin>>a.asignatura_favorita;
    cin.ignore('\n', 256);

    cout<<'\n'<<'\n'<<"DATOS DEL ALUMNO"<<endl;
    cout<<"Nombre: \t"<<a.nombre<<endl;
    cout<<"Semestre: \t"<<a.carrera<<endl;
    cout<<"Carrera: \t"<<a.semestre<<endl;
    cout<<"Asignatura favorita: \t"<<a.asignatura_favorita<<endl;

    return false;
}
