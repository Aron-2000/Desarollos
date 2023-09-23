#include <iostream>
using namespace std;
/* 9. Se quiere intercambiar los valores de x e y (ingresados por teclado), sin perder el valor de ninguno de ellos. 
Imprimir el resultado obtenido */

int main(int argc, char** argv) {
	int n1,aux;
	n1=aux=0;
	cout<<"\n Ingrese El Valor X: ";
	cin>>n1;
	aux=n1;
	cout<<"\n Ingrese El Valor Y: ";
	cin>>n1;
	cout<<"\n El Valor De X Ingresado Fue: "<<aux<<"\n y El Y Fue: "<<n1;
	
	return 0;
}
