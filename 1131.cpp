#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{

	int grem; //entrada para os gols do gremio
	int inter; //entrada para os gols do inter
	int novo = 0;
	int jogo = 0; //contagem
	int gremcont = 0; //contagem para os jogos ganhos do gremio
	int intercont = 0; //contagem para os jogos ganhos do inter
	int empat = 0; //contagem para os jogos empatados

	do
	{
		cin >> inter >> grem;

		cout << "Novo grenal (1-sim 2-nao)" << endl;

		cin >> novo;

		jogo++;

		if(grem > inter)
		{
			gremcont++;
		}
		if(inter > grem)
		{
			intercont++;
		}
	}
	while(novo == 1);

	cout << jogo << " grenais" << endl;
	cout << "Inter:" << intercont << endl;
	cout << "Gremio:" << gremcont << endl;
	cout << "Empates:" << empat << endl;

	if(gremcont > intercont)
	{
		cout << "Gremio venceu mais" << endl;
	}
	if(intercont > gremcont)
	{
		cout << "Inter venceu mais" << endl;
	}

	return 0;
}
