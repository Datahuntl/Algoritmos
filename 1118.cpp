#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{

	double nota1;
	double nota2;
	int num;

	do
	{

		cin >> nota1 >> nota2;

		if(nota1 < 0 || nota1 > 10)
		{
			do
			{
				cout << "nota invalida" << endl;

				cin >> nota1;

			}
			while(nota1 < 0 || nota1 > 10);
		}
		if(nota2 < 0 || nota2 > 10)
		{
			do
			{
				cout << "nota invalida" << endl;

				cin >> nota2;
			}
			while(nota2 < 0 || nota2 > 10);
		}

		cout << fixed << setprecision(2) << "media = " << (nota1 + nota2) / 2 << endl;

		do
		{
			cout << "novo calculo (1-sim 2-nao)" << endl;
			cin >> num;
		}
		while(num != 1 && num != 2);


	}
	while(num == 1);

	return 0;
}
