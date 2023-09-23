#include <iostream>
using namespace std;
/* Calcular y mostrar el cuadrado de un número. El número debe ser mayor que cero, en caso de error que aparezca 
el mensaje "ERROR, el número debe ser mayor que cero */

int main(int argc, char** argv) {
	int n,c;
	n=0;
	c=0;
	cout<<"\n Ingrese un numero mayor a 0: ";
	cin>>n;
	if(n>0){
		c=n*2;
		cout<<"\n El numero al cuadrado es: "<<c;
	}
	if(n<=0){
		cout<<"\n Error El Numero Debe ser Mayor Que 0";
	}
	
	return 0;
}
