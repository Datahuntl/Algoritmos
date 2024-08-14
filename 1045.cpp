#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{

	//variaveis
	double X; //primeira variavel
	double Y; //segunda variavel
	double Z; //terceira variavel
	double A;
	double B;
	double C;

	//entradas
	cin >> A >> B >> C;

	//if else 1

	if ((A > B) && (A > C) && (B > C))
	{
		X = A;
		Y = B;
		Z = C;
	}
	else if ((A > B) && (A > C) && (B < C))
	{
		X = A;
		Y = C;
		Z = B;
	}
	else if((A > B) && (A < C) && (B < C))
	{
		X = C;
		Y = A;
		Z = B;
	}
	else if ((A < B) && (A < C) && (B > C))
	{
		X = B;
		Y = C;
		Z = A;
	}
	else if ((A < B) && (A < C) && (B < C))
	{
		X = C;
		Y = B;
		Z = A;
	}
	else if ((A < B) && (A > C) && (B > C))
	{
		X = B;
		Y = A;
		Z = C;
	}
	else if ((A == B) && (A < C) && (C > B))
	{
		X = C;
		Y = B;
		Z = A;

	}
	else if ((A == C) && (A < B) && (C < B))
	{
		X = B;
		Y = C;
		Z = A;
	}
	else if ((C == B) && (A > C) && (A > C))
	{
		X = A;
		Y = C;
		Z = B;
	}
	else if ((A == B) && (A > C) && (B > C))
	{
		X = A;
		Y = B;
		Z = C;
	}
	else if ((A == C) && (B < C) && (B < A))
	{
		X = A;
		Y = C;
		Z = B;
	}
	else if ((B == C) && (A < C) && (A < B))
	{
		X = C;
		Y = B;
		Z = A;
	}
	else if ((B == C) && (A == C) && (A == B))
	{
		X = C;
		Y = B;
		Z = A;
	}

	//if else 2
	if (X < (Y + Z))
	{

		if((pow(X, 2)) == ((pow(Y, 2)) + (pow(Z, 2))))
		{
			cout << "TRIANGULO RETANGULO" << endl;
		}
		else if ((pow(X, 2)) > ((pow(Y, 2)) + (pow(Z, 2))))
		{
			cout << "TRIANGULO OBTUSANGULO" << endl;
		}
		else if ((pow(X, 2)) < ((pow(Y, 2)) + (pow(Z, 2))))
		{
			cout << "TRIANGULO ACUTANGULO" << endl;
		}

		if((X == Y) && (X == Z) && (Y == Z))
		{
			cout << "TRIANGULO EQUILATERO" << endl;
		}
		else if((X == Y) || (Y == Z) || (X == Z))
		{
			cout << "TRIANGULO ISOSCELES" << endl;
		}
	}

	else
	{
		cout << "NAO FORMA TRIANGULO" << endl;
	}

	return 0;
}
