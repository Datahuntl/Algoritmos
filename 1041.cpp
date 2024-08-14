#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>

using namespace std;

int main(){
	
	//variaveis
	float x; //cordenada do eixo X
	float y; //cordenada do eixo Y
	
	//entradas
	cin>>x>>y;
	
	//if else
	if(x > 0 && y > 0){ //se X e Y forem maior que 0 ele fica no 1º Quadrante
		cout<<"Q1"<<endl;
	}
	else if(x > 0 && y < 0){ //se X for maior que 0 e Y menor que 0 ele fica no 4º Quadrante
		cout<<"Q4"<<endl;
	}
	else if(x < 0 && y > 0){ //se X for menor que 0 e Y maior que 0 ele fica no 2º Quadrante
		cout<<"Q2"<<endl;
	}
	else if(x < 0 && y < 0){ //se X e Y forem menor que 0 ele fica no 3º Quadrante
		cout<<"Q3"<<endl;
	}
	else if(x == 0 && y == 0){ //se X e Y forem igual a 0 ele fica na Origem
		cout<<"Origem"<<endl;
	}
	else if(x == 0 && y > 0 || y < 0){ //se X for igual a 0 e Y for maior ou menor que 0 fica no Y
		cout<<"Eixo Y"<<endl;
	} 
	else if(y == 0 && x > 0 || x < 0){ //se Y for igual a 0 e X for maior ou menor que 0 fica no X
		cout<<"Eixo X"<<endl;
	}
	
	return 0;
}
