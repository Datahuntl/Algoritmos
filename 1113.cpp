#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
#include <cstring>

using namespace std;

int main()
{

	int x;
	int y;
	char dec[13] = "Decrescente";
	char cre[11] = "Crescente";

	while(x != y)
	{

		cin >> x >> y;

		if(x > y)
		{
			cout << dec << endl;
		}
		else if(x < y)
		{
			cout << cre << endl;
		}
	}

	return 0;
}
