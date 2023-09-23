#include <iostream>
using namespace std;
/* Calcular la utilidad que un trabajador recibe en el reparto anual de utilidades si este se le asigna como 
un porcentaje de su salario mensual que depende de su antigüedad en la empresa de acuerdo con la 
siguiente tabla:
|Antigüedad                       |Utilidad
|Menos de 1 año                   |5 % del salario|
|1 año o más y menos de 3 años    |7 % del salario|
|3 años o más y menos de 6 años   |10 % del salario|
|6 años o más y menos de 10 años  |15 % del salario|
|10 años o más                    |20 % del salario| */

int main(int argc, char** argv) {
	int sm,an,res,total;
	sm=0;
	an=0;
	res=0;
	total=0;
	cout<<"\n Ingrese su salario mensual: ";
	cin>>sm;
	cout<<"\n Ingrese Su Antiguedad: ";
	cin>>an;
	if(an<=1){
		res=sm*0.05;
		total=sm+res;
		cout<<"Su Salario Con Esa Antiguedad Es: "<<total;
	}
	if(an>1 and an<3){
		res=sm*0.07;
		total=sm+res;
		cout<<"Su Salario Con Esa Antiguedad Es: "<<total;
	}
	if(an>3 and an<6){
		res=sm*0.10;
		total=sm+res;
		cout<<"Su Salario Con Esa Antiguedad Es: "<<total;
	}
	if(an>6 and an<10){
		res=sm*0.15;
		total=sm+res;
		cout<<"Su Salario Con Esa Antiguedad Es: "<<total;
	}
	if(an>10 and an<100){
		res=sm*0.20;
		total=sm+res;
		cout<<"Su Salario Con Esa Antiguedad Es: "<<total;
	}
	
	return 0;
}
