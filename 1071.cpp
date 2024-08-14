#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{

	int n1; //entrada numero 1
	int n2; //entrada numero 2
	int i;
	int soma = 0;

	cin >> n1 >> n2;

	for(i = n2 + 1; i < n1; i++)
	{
		if(i % 2 != 0)
		{
			soma = soma + i;
		}
	}

		   cout << soma << endl;
	return 0;
}
