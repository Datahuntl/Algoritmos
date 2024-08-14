#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{

	int n; //numero de testes
	int i;
	int aux; //quantidade de cobaias
	char cob; //declaração do tipo de cobaia
	double cobaia = 0; //contagem de cobaias
	double coelho = 0; //contagem coelhos
	double rato = 0; //contagem ratos
	double sapo = 0; //contagem sapos
	double coelhoperc; //percentual coelho
	double ratoperc; //percentual rato
	double sapoperc; //percentual sapo

	cin >> n;

	for(i = 0; i < n; i++)
	{

		cin >> aux >> cob;
		
		cobaia = cobaia + aux; 

		if(cob == 'C') //se a cobaia sair como C faz isso
		{
			coelho = coelho + aux; 
		}
		if(cob == 'S') //se a cobaia sair como S faz isso
		{
			sapo = sapo + aux; 
		}
		if(cob == 'R') //se a cobaia sair como R faz isso
		{
			rato = rato + aux; 
		}

	}

	coelhoperc = (coelho / cobaia) * 100.0;
	ratoperc = (rato / cobaia) * 100.0;
	sapoperc = (sapo / cobaia) * 100.0;

	cout << "Total: " << cobaia << " cobaias" << endl;
	cout << "Total de coelhos: " << coelho << endl;
	cout << "Total de ratos: " << rato << endl;
	cout << "Total de sapos: " << sapo << endl;
	cout << fixed << setprecision(2) << "Percentual de coelhos: " << coelhoperc << " %" << endl;
	cout << fixed << setprecision(2) << "Percentual de ratos: " << ratoperc << " %" << endl;
	cout << fixed << setprecision(2)  << "Percentual de sapos: " << sapoperc << " %" << endl;

	return 0;
}
