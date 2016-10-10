#include <iostream>
#include <string>

using namespace std;



int main()
{
    cout<<"CALIFICACIONES DE SEGUNDO SEMESTRE"<<endl;
    cout<<"__________________________________"<<endl;

    // Solicitamos los datos personales del alumno

    string nombre;

    cout<<"Ingresa el nombre del alumno:"<<endl;
    getline(cin, nombre);


    // Solicitamos las calificaciones del alumno

    int parcial = 1;
    double p1, p2, p3, prom_sem;

	// Repetimos el proceso para cada uno de los parciales
	
    while(parcial != 4)
    {
    	cout<<"..."<<endl;
        string nParcial;

        switch(parcial)
        {
            case 1: nParcial = "primer";
                break;
            case 2: nParcial = "segundo";
                break;
            case 3: nParcial = "tercero";
                break;
        }

        cout<<"Calificaciones del "<<nParcial<<" parcial"<<endl;

        double c1, c2, c3, c4, c5, c6, c7;
        const int MATERIAS = 7;

        cout<<"Ingles:"<<endl;
        cin>>c1;
        cout<<"Logica:"<<endl;
        cin>>c2;
        cout<<"LEOyE:"<<endl;
        cin>>c3;
        cout<<"TICs:"<<endl;
        cin>>c4;
        cout<<"Algebra:"<<endl;
        cin>>c5;
        cout<<"Diseño de BD:"<<endl;
        cin>>c6;
        cout<<"Programacion Estructurada:"<<endl;
        cin>>c7;

        switch(parcial)
        {
            case 1: p1 = (c1+c2+c3+c4+c5+c6+c7) / MATERIAS;
                break;
            case 2: p2 = (c1+c2+c3+c4+c5+c6+c7) / MATERIAS;
                break;
            case 3: p3 = (c1+c2+c3+c4+c5+c6+c7) / MATERIAS;
                break;
        }

        parcial++;
    }

    prom_sem = (p1 + p2 + p3) / 3;

    cout<<"RESULTADOS"<<endl;
    cout<<"__________"<<endl;
    cout<<"Promedio del primer parcial: "<<p1<<endl;
    cout<<"Promedio del segundo parcial: "<<p2<<endl;
    cout<<"Promedio del tercer parcial: "<<p3<<endl;
    cout<<endl<<"Promedio semestral: "<<prom_sem<<endl;

    if(prom_sem <= 7)
    {
        cout<<nombre<<" debe echarle mas ganas."<<endl;
        cout<<nombre<<" podria subir un punto mas asistiendo a asesorias."<<endl;
    }
    if(prom_sem >= 7)
    {
        cout<<nombre<<" es un alumno con buen aprovechamiento."<<endl;
    }

    return 0;
}

