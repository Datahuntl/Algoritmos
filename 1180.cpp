#include <iostream>

using namespace std;

int main()
{
	
	int N; //Valor para armazenar o tamanho do vetor X[]
	int maior = -9999;
	int menor = 9999;
	int pos;
	
	cin >> N;
	
	int X[N]; //Vetor cheirado
	
	for(int i = 0; i < N; i++)
	{
		cin >> X[i];
		
		if(X[i] > maior)
		{
			maior = X[i];
		}
		
		if(X[i] < menor)
		{
			menor = X[i];
			pos = i;
		}
	}
	
	cout << "Menor valor: " << menor << endl;
	cout << "Posicao: " << pos << endl;
	
	return 0;
}
