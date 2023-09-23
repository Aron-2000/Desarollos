#include <iostream>
using namespace std;
/* Ingresar 4 números y calcular su suma y determinar si el resultado es cero, mayor a cero o menor a cero */

int main(int argc, char** argv) {
	int n1,n2,n3,n4,suma;
	n1=0;
	n2=0;
	n3=0;
	n4=0;
	suma=0;
	cout<<"\n Ingrese un numero: ";
	cin>>n1;
	cout<<"\n ingrese un numero: ";
	cin>>n2;
	cout<<"\n Ingrese Un numero: ";
	cin>>n3;
	cout<<"\n Ingrese un Numero: ";
	cin>>n4;
	suma=n1+n2+n3+n4;
	if(suma==0){
		cout<<"\n El Numero Es Igual a 0 ";
	}
	if(suma>0){
		cout<<"\n El Numero Es Mayor a 0 ";
	}
	if(suma<0){
		cout<<"\n El Mayor es Menor a 0 ";
	}
	
	return 0;
}
