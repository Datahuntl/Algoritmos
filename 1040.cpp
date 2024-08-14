#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{

	//variaveis
	float N1; //nota 1
	float N2; //nota 2
	float N3; //nota 3
	float N4; //nota 4
	float M1; //media 1

	//entradas
	cin >> N1 >> N2 >> N3 >> N4;

	//contas
	M1 = ((N1 * 2) + (N2 * 3) + (N3 * 4) + (N4 * 1)) / 10; //conta para a media

	//saidas
	cout << fixed << setprecision(1) << "Media: " << M1 << endl;

	//if else
	if(M1 >= 7)  //se o aluno conseguir uma nota maior q 7 ele ta aprovado
	{
		cout << "Aluno aprovado." << endl;
	}
	else if(M1 < 5)  //se o aluno conseguir uma nota abaixo de 5 ele ta repprovado
	{
		cout << "Aluno reprovado." << endl;
	}
	else if(M1 >= 5 && M1 <= 6.9)  //se o aluno tiver uma nota entre 5 e 6.9 ele vai fazer outro exame
	{
		cout << "Aluno em exame." << endl;
		//variaveis
		float N5; //nota 5
		float M2; //media 2
		//entradas
		cin >> N5;
		//contas
		M2 = (M1 + N5) / 2; //conta para a media depois do exame 2

		//saidas
		cout << fixed << setprecision(1) << "Nota do exame: " << N5 << endl;

		//if else
		if(M2 >= 5)
		{
			cout << "Aluno aprovado." << endl;
			cout << fixed << setprecision(1) << "Media final: " << M2 << endl;
		}
		else if(M2 < 5)
		{
			cout << "Aluno reprovado." << endl;
			cout << fixed << setprecision(1) << "Media final: " << M2 << endl;
		}


	}
	return 0;
}
