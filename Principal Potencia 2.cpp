#include "Potenica.h"
#include <cstdlib>
#include <iostream>

using namespace std;

int main (int argc, char * arg[]) {
	int opc;
	int F,H, Salir = 1;

	Potencia Po;
	cout<<"Welcome the program for calcular la potencia en Recursiva y lterativa"<<endl;
	cout<<"Base: "<<endl;
	cin>>F;
	cout<<"Potencia: "<<endl;
	cin>>H;
	do
	{
	system("cls");
	cout<<"1 CalcularPotencia en Recursiva"<<endl;
	cout<<"2 CalcularPotencia en lterativa"<<endl;
	cout<<"Selecciona una opcion"<<endl;
	cin>>opc;
	
	switch(opc)
	{
		case 1:cout<<"1 CalcularPotencia en Recursiva"<<endl;
		if (F>=0)
		{	
		
			cout<<Po.calcularPotenciaRecursiva(F,H)<<endl;
		}
		break;
		
		
		case 2:cout<<"2 CalcularPotencia lterativa"<<endl;
		cout<<Po.potenciaIteractiva(F,H)<<endl;
		break;
		 
		default:cout<<"ERROR, no existe esa opcion"<<endl;
		 	
	}
		cout<<endl;
		cout<<"Desea Continuar Con El Programa"<<endl;
		cout<<"Si... Presione 1"<<endl;
		cout<<"No... Presione Cualquier Otro Numero"<<endl;
		cin>>Salir;
	}while (Salir == 1);
	getchar();
    system("pause");
    return 0;
}
