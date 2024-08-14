#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>

using namespace std;

int main(){
	
	//variaveis
	float a;
	float b;
	float c;
	
	//entradas
	cin>>a>>b>>c;
	
	//contas
	
	//if else
	if((b - c) < a && (b - c) < (b + c) && (a - c) < b && (a - c) < (a + c) && (a - b) < c && (a - b) < (a + b)){
		cout<<fixed<<setprecision(1)<<"Perimetro = "<<a + b +c<<endl;
	}
	else{
		cout<<fixed<<setprecision(1)<<"Area = "<<((a + b) * c) / 2<<endl;
	}
		
	return 0;
}
