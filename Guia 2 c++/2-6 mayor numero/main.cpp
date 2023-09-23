#include <iostream>
using namespace std;
/* Desarrollar un algoritmo que permita leer tres valores distintos y almacenarlos en las variables a, b y c 
respectivamente. El algoritmo debe imprimir cual es el mayor número ingresado.  */

int main(int argc, char** argv) {
	int a,b,c;
	a=0;
	b=0;
	c=0;
	cout<<"\n Ingrese Un Numero: ";
	cin>>a;
	cout<<"\n ingrese un numero: ";
	cin>>b;
	cout<<"\n Ingrese un numero: ";
	cin>>c;
	if(a>b && a>c){
		cout<<"\n El mayor es: "<<a;
	}
	else if(b>a && b>c){
		cout<<"\n el mayor es: "<<b;
	}
	else if(c>a && c>b){
		cout<<"\n El Mayor es: "<<c;
	}
	else{
		cout<<"\n Error: Mismo Valor Ingresado";
	}
	
	return 0;
}
