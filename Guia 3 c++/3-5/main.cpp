#include <iostream>
using namespace std;
/* Diseñar un algoritmo que permita ingresar el código y el precio de 4 autos y mostrar los datos (código y precio) 
del auto más caro y del más económico */

int main(int argc, char** argv) {
	int cod1,cod2,cod3,cod4,prec1,prec2,prec3,prec4;
	cod1=cod2=cod3=cod4=0;
	prec1=prec2=prec3=prec4=0;
	cout<<"\n \t Auto 1 ";
	cout<<"\n ingrese el codigo: ";
	cin>>cod1;
	cout<<"\n Ingrese el precio: ";
	cin>>prec1;
	cout<<"\n \t Auto 2 ";
	cout<<"\n ingrese el codigo: ";
	cin>>cod2; 
	cout<<"\n Ingrese el precio: ";
	cin>>prec2;
	cout<<"\n \t Auto 3 ";
	cout<<"\n ingrese el codigo: ";
	cin>>cod3;
	cout<<"\n Ingrese el precio: ";
	cin>>prec3;
	cout<<"\n \t Auto 4 ";
	cout<<"\n ingrese el codigo: ";
	cin>>cod4;
	cout<<"\n Ingrese el precio: ";
	cin>>prec4;
	if(prec1>prec2 && prec3 && prec4){
		cout<<"\n El mas caro es: "<<prec1<< "\n codigo"<< cod1;
	}
		if(prec2>prec3 && prec4 && prec1){
		cout<<"\n El mas caro es: "<<prec2<< "\n codigo "<< cod2;
	}
		if(prec3>prec4 && prec2 && prec1){
		cout<<"\n El mas caro es: "<<prec3<< "\n codigo "<< cod3;
	}
		if(prec4>prec3 && prec2 && prec1){
		cout<<"\n El mas caro es: "<<prec4<< "\n codigo "<< cod4;
	}
	else {
		cout<<"\n Error Datos incorrectos";
	}
	return 0;
}
