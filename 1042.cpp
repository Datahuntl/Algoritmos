#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>

using namespace std;

int main(){
	
	//variaveis
	int a;
	int b;
	int c;
	int ab;
	int abc;
	
	//entradas
	cin>>a>>b>>c;
	
	//contas
	ab = (a + b + abs(a - b * 1.0)) / 2; //conta para ver entre A e B quem é maior
	abc = (ab + c + abs(ab - c * 1.0)) / 2; //conta para ver quem é maior entre A B C
	
	//if else
	if(a < b && a < c){
		cout<<a<<endl;
	}
	else if(b < a && b < c){
		cout<<b<<endl;
	}
	else if(c < a && c < b){
		cout<<c<<endl;
	}
	
	if(a > b && a < c){
		cout<<a<<endl;
	}
	else if(a > c && a < b){
		cout<<a<<endl;
	}
	else if(b > a && b < c){
		cout<<b<<endl;
	}
	else if(b > c && b < a){
		cout<<b<<endl;
	}
	else if(c > a && c < b){
		cout<<c<<endl;
	}
	else if(c > b && c < a){
		cout<<c<<endl;
	}
	
	//saidas
	cout<<abc<<endl;
	cout<<endl;
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	
	return 0;
}
