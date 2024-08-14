#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{

	float aux; //entrada dos numeros
	float soma = 0; //soma dos numeros positivos
	float media; //media dos numeros positivos
	int i;
	int pos = 0;

	for(i = 0; i < 6; i++)
	{
		cin >> aux;
		if(aux >= 0)
		{
			soma = soma + aux;
			pos++;
		}
	}

	media = soma / pos;
	
	cout << pos << " valores positivos" << endl;
	cout << fixed << setprecision(1) << media << endl;

	return 0;
}
