#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

	int i;
	int n;
	int t;

	string A;
	string B;

	bool b;
	bool c;

	cin  >> n;

	while(n--)
	{
		cin >> t ;
		cin >> B;
		b = true ;
		c = false ;
		for(i = 1; i < t; i++)
		{
			b = false ;
			cin >> A ;
			if(B != A)
			{
				b = false ;
				c = true ;
			}
			else
			{
				b = true ;
			}
		}
		if(b == true && c == false)
			cout << B << endl;
		else
			cout << "ingles" << endl;
	}
	return 0;
}
