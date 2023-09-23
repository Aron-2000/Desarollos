#include <iostream>
using namespace std;
/* Un cliente desea saber cuánto deberá pagar finalmente por su compra, ingresar la cantidad vendida y 
el precio para obtener el total a pagar. El comercio ofrece un descuento del 15% sobre el total de la 
compra si la compra es mayor o igual a 50 mil pesos. Sino, el descuento es del 5%. Calcular y mostrar el 
total a pagar y el importe que obtiene en concepto de descuento. */

int main(int argc, char** argv) {
	int compra,precio,tap,des;
	compra=0;
	precio=0;
	tap=0;
	des=0;
	cout<<"\n Ingrese la cantidad comprada: ";
	cin>>compra;
	cout<<"\n Ingrese Cuanto le costo: ";
	cin>>precio;
	if(precio==50000) {
		des=precio/15;
		tap=precio-des;
		cout<<"Su Total A Pagar Es "<<precio <<" Con El Descuento De "<<des<< " Es "<<tap;
} else if(precio>50000){
des=precio/15;
tap=precio-des;
cout<<"Su Total A Pagar Es "<<precio <<" Con El Descuento De "<<des<< " Es "<<tap;
} if(precio<50000){
des=precio/5;
tap=precio-des;
cout<<"Su Total A Pagar Es "<<precio <<" Con El Descuento De "<<des<< " Es "<<tap;
}
	
	return 0;
}
