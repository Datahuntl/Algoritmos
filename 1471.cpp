#include <iostream>

using namespace std;

int main()
{

	int M; //Qnt de voluntarios que mergulharam
	int R; //Qnt de voluntarios que retornaram
	int contR = 0;

	while(cin >> M >> R)
	{
		contR = 0;

		bool V[10005] = {}; //Vetor de tamanho dos que mergulharam
		int Retorno;

		for(int i = 0; i < R; i++)
		{
			cin >> Retorno;
			V[Retorno] = true;
		}

		for(int i = 1; i <= M; i++)
		{
			if(V[i] == false)
				cout << i << " ";
			else
				contR++;

		}

		if(contR == M)
			cout << "*" << endl;
		else
			cout << endl;
	}
	return 0;
}
