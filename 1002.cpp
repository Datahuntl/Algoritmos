#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double Raio; //Variavel para guardar o Raio
	double pi = 3.14159; //Variavel para guardar o Pi
	double Area; //Variavel para guardar a Area
	
	cin >> Raio; //Entrada do valor de Raio
	
	Area = (Raio * Raio) * pi; //Conta para achar a area
	
	cout << fixed << setprecision(4) << "A=" << Area << endl;
	
	return 0;	
}
