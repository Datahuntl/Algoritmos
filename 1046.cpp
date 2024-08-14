#include <iostream>

using namespace std;

int main()
{
	int horaInicial;
	int horaFinal;
	
	cin >> horaInicial >> horaFinal;
	
	if(horaInicial > horaFinal)
		cout << "O JOGO DUROU " << (24 - horaInicial) + horaFinal << " HORA(S)" <<  endl;
	
	else if(horaInicial < horaFinal)
		cout << "O JOGO DUROU " << horaFinal - horaInicial << " HORA(S)" <<  endl;
	
	else
		cout << "O JOGO DUROU 24 HORA(S)" << endl;
	
	return 0;
}
