#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>

using namespace std;

int main(){
	
	//variaveis
	int n1;
	int n2;
	
	//entradas
	cin>>n1>>n2;
	
	//if else
	if(n1 % n2 == 0 || n2 % n1 == 0){
		cout<<"Sao Multiplos"<<endl;
	}
	else{
		cout<<"Nao sao Multiplos"<<endl;
	}
	
	return 0;
}
