#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>

using namespace std;

int main(){
	
	int aux;
	int i;
	int par = 0;
	
	for(i = 0; i < 5; i++){
		cin>>aux;
		if(aux % 2 == 0){
			par++;
		}
	}
	cout<<par<<" valores pares"<<endl;
	
	return 0;
}
