#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char palavra[20];
	int tamanho = 0;

	cin >> palavra;

	tamanho = strlen(palavra);

	if(tamanho >= 10)
	{
		cout << "palavrao" << endl;
	}

	if(tamanho < 10)
	{
		cout << "palavrinha" << endl;
	}

	return 0;
}
