#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>

using namespace std;

int main(){
	
	double aux;
	int i;
	int positivos = 0;
	
	for(i = 0; i < 6; i++){
		cin>>aux;
		if(aux > 0){
			positivos++;
		}
	}
	
	cout<<positivos<<" valores positivos"<<endl;
	
	return 0;
}
