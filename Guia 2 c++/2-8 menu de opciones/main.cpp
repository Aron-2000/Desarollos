#include <iostream>
using namespace std;
/* Realizar un programa que solicite el ingreso de un n�mero y luego presente un peque�o men� con tres 
opciones:
a) 1-calcular el doble
b) 2-calcular el triple
c) 3-calcular el cu�druple
Introduzca opci�n:
Seg�n la opci�n introducida (1,2 o 3) el programa realizar� un c�lculo y presentar� el resultado por 
pantalla. En caso de que la persona introduzca otra opci�n, aparecer� un mensaje de �Error� y no se 
calcular� nada */

int main(int argc, char** argv) {
	int num,num1,num2;
	num=0;
	num1=0;
	num=2;
	cout<<"\n ingrese un numero del 1 al 3: ";
	cin>>num;
	cout<<"\n Ingrese un numero: ";
	cin>>num1;
	switch(num)
	{
		case 1: num2=num1*2;
		cout<<"\n El Doble Es: "<<num2;
			break;
		case 2: num2=num1*3;
		cout<<"\n El Triple Es: "<<num2;
			break;
		case 3: num2=num1*4;
		cout<<"\n El Cuadruple Es: "<<num2;
			break;
	default: cout<<"Error Numero Ingresado Invalido";
}
	
	return 0;
}
