#include <iostream>
using namespace std;
/* Realizar un programa que solicite el ingreso de un número y luego presente un pequeño menú con tres 
opciones:
a) 1-calcular el doble
b) 2-calcular el triple
c) 3-calcular el cuádruple
Introduzca opción:
Según la opción introducida (1,2 o 3) el programa realizará un cálculo y presentará el resultado por 
pantalla. En caso de que la persona introduzca otra opción, aparecerá un mensaje de “Error” y no se 
calculará nada */

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
