#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
	int senha; //entrada da senha

	cin >> senha;
	if(senha != 2002)
	{
		do
		{
			cout << "Senha Invalida" << endl;
			cin >> senha;
		}
		while(senha != 2002);
	}
	cout << "Acesso Permitido" << endl;

	return 0;
}
