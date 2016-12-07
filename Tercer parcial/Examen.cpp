#include <iostream>

using namespace std;

int main()
{

	int arreglo[5];
	int matriz[2][2];

	for(int i = 0; i <= 5; i++)
	{
		cout<<"Elemento "<<i<<": ";
		cin>>arreglo[i];
	}

	for(int i = 0; i <= 5; i++)
	{
		cout<<arreglo[i]<<" ";
	}

	cout<<endl<<endl;

	for(int i = 0; i <= 2; i++)
	{
		for(int j = 0; j <= 2; j++)
		{
			cout<<"Elemento "<<i<<","<<j<<": ";
			cin>>matriz[i][j];
		}
	}

	for(int i = 0; i <= 2; i++)
	{
		for(int j = 0; j <= 2; j++)
		{
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}
