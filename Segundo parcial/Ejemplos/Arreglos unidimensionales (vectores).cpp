#include<iostream>
using namespace std;

int main()
{

	// ARREGLOS UNIDIMENSIONALES (VECTORES)
	
	int arreglo1[10];
	int arreglo2[] = {1, 2, 3, 4, 5};
	
	for(int i=0; i<10;i++)
	{
		cout<<"Indice "<<i<<": ";
		cin>>arreglo1[i];
	}
	
	for (int i=0;i<10;i++)
	{
		cout<<arreglo1[i]<<" ";
	}
	
	// EL PRIMER ELEMENTO TIENE INDICE 0
	
	//	cout <<"El primer elemento es "<<arreglo2[0]<<endl;
	
	// EL ULTIMO ELEMENTO TIENE INDICE n-1
	
	//	int n = sizeof(arreglo2);
	//	cout <<"El ultimo elemento es "<<arreglo2[]<<endl;

	return 0;
}
