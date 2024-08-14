#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{

	int aux;
	int i;
	int maior = -9999;
	int pos = 0;

	for(i = 1; i <= 100; i++)
	{
		cin >> aux;
		if(aux > maior)
		{
			maior = aux;
			pos = i;
		}
	}

	cout << maior << endl;
	cout << pos << endl;

	return 0;
}
