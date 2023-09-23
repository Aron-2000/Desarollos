#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num,num1,num2;
	num=0;
	num1=0;
	num2=0;
	cout<<"\n Ingrese un numero del 1 al 3: ";
	cin>>num;
	cout<<"\n Ingrese un numero ";
	cin>>num1;
	if(num==1){
		num2=num1*2;
		cout<<"\n El Doble Es: "<<num2;
	}
	if(num==2){
		num2=num1*3;
		cout<<"\n El Triple Es: "<<num2;
	}
	if(num==3){
		num2=num1*4;
	cout<<"\n El Cuadruple Es: "<<num2;	
	}
	if(num>3){
		cout<<"\n Error El Numero Ingresado No Es Valido";
	}
	return 0;
}
