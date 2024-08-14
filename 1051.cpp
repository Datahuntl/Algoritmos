#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>

using namespace std;

int main(){
	
	//variaveis
	double n; //salario
	double t1;
	double t2;
	double t3;
	
	//entradas
	cin>>n;
	
	//contas
	t1 = ((n - 2000) * 0.08); //imposto de 8%
	t2 = 80 + ((n - 3000) * 0.18); //imposto de 18%
	t3 = 80 + 270 + ((n - 4500) * 0.28); //imposto de 28%
	
	if(n <= 2000){ //se o salario for menor que 2000 é isento
		cout<<"Isento"<<endl;
	}
	else if(n > 2000 && n <= 3000){ //se o salario ser entre 2000 e 3000 é isso
		cout<<fixed<<setprecision(2)<<"R$ "<<t1<<endl;
	}
	else if(n > 3000 && n <= 4500){ //se o salario ser entre 3000 e 4500 é isso
		cout<<fixed<<setprecision(2)<<"R$ "<<t2<<endl;
	}
	else if(n > 4500){ //se o salario ser maior que 4500 é isso
		cout<<fixed<<setprecision(2)<<"R$ "<<t3<<endl;
	}
	
	return 0;
}
