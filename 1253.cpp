#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int casosTeste;
	short int pular;
	string Palavra;
	int cont = 0;
	
	cin >> casosTeste;
	
	while(cont < casosTeste)
	{
		
		cin >> Palavra;
		
		cin >> pular;
		
		for(int i = 0; i < Palavra.size(); i++)
		{
			if(Palavra[i] - pular < 65)
				Palavra[i] += 26;
			
			Palavra[i] -= pular;
		}
		
		cout << Palavra << endl;
		
		cont++;
	}
	
	return 0;
}
