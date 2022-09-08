#include <cstdlib>
#include <iostream>
using namespace std;

class Potencia
{
	private:
		int p;
	public:
		Potencia(){p=0;}
		int calcularPotenciaRecursiva(int x,int n);
		int potenciaIteractiva(int x,int n);
		void visualizar();
};

int Potencia::potenciaIteractiva(int x,int n)
{
	p=1;
	for(int i=1;i<=n;i++)
	{
		p=p*x;
	}
		return p;
}

int Potencia::calcularPotenciaRecursiva(int x, int n)
{
	if(n==0)
	{
		return 1;
	}
	else
		return x*calcularPotenciaRecursiva(x, n-1);
}
void Potencia::visualizar()
{
	cout<<" La potencia es= "<<p<<endl;
}
