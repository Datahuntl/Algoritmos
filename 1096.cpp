#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>

using namespace std;

int main(){
	
	int i;
	int j;
	
	for(i = 1; i <= 9; i = i + 2) // ou i+=2 
	{
		for(j = 7; j >= 5; j--)
		{
			cout << "I=" << i << " J=" << j << endl;
		}
	}
	
	return 0;
}
