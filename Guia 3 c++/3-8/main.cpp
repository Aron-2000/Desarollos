#include <iostream>
using namespace std;
/* 8. Un comercio tiene a la venta los siguientes art�culos:
|C�digo	| 	|Descripci�n 						|	|Precio|
|1 		|	|Auriculares Bluetooth Inal�mbricos	| 	|$890  |
|2 		|	|Mouse Inal�mbrico 					|	|$450  |
|3 		|	|Auricular Tipo Vincha 				|	|$700  |
Con esta informaci�n, realizar un programa que permita ingresar los siguientes datos de una venta: 
c�digo del producto y cantidad vendida. 
Calcular y mostrar el importe de la venta. 
El comercio tiene a disposici�n las siguientes formas de pago. 
Permitir el ingreso del c�digo de forma de pago 
(1,2) y determinar el precio final de la venta
1 Contado 5% de descuento
2 Tarjeta de Cr�dito 3% de recargo */

int main(int argc, char** argv) {
	int cod,cod2,canv,pre,aum,total,des,rec;
	cod=cod2=canv=pre=aum=total=des=rec=0;
	cout<<"\n Ingrese el producto que desea comprar: ";
	cout<<"\n 1. Auriculares Bluetooth Inalambricos: ";
	cout<<"\n 2. Mouse Inalambrico: ";
	cout<<"\n 3. Auricular Tipo Vincha: ";
	cout<<"\n Ingrese El Codigo Del Producto: ";
	cin>>cod;
	cout<<"\n Ingrese cuantas Unidades del Producto Desea: ";
	cin>>canv;
	cout<<"\n Pagara Al Contado? O Pagara Usando Tarjeta De Credito?";
	cout<<"\n 1. Contado ";
	cout<<"\n 2. Tarjeta ";
	cout<<"\n Ingrese el Metodo de pago: ";
	cin>>cod2;
	if(cod==1){
		//Auriculares Bluetooth Inal�mbricos
		if(canv==1){
			pre=890;
			cout<<"\n El Precio Es: "<<pre;
			if(cod2==1){
				des=pre/5;
				total=pre-des;
				cout<<"\n Y Con Descuento De: "<<des;
				cout<<"\n Seria En Total: "<<total;
			}
			if(cod2==2){
				rec=pre*3;
				cout<<"\n Con el Recargo Seria En Total: "<<rec;
			}
		}
		if(canv>1){
			pre=890;
			aum=pre*canv;
			if(cod2==1){
				des=aum/5;
				cout<<"\n El Precio Es: "<<aum <<"\n Con Descuento Seria: "<<des;
			}
			cout<<"\n El Precio Es: "<<aum;
		}
	}
	if(cod==2){
		//Mouse Inal�mbrico
		if(canv==1){
			pre=450;
			cout<<"\n El Precio Es: "<<pre;
			if(cod2==1){
				des=pre/5;
				total=pre-des;
				cout<<"\n Y Con Descuento De: "<<des;
				cout<<"\n Seria En Total: "<<total;
			}
			if(cod2==2){
				rec=pre*3;
				cout<<"\n Con el Recargo Seria En Total: "<<rec;
			}
		}
		if(canv>1){
			pre=450;
			aum=pre*canv;
			if(cod2==1){
				des=aum/5;
				cout<<"\n El Precio Es: "<<aum <<"\n Con Descuento Seria: "<<des;
			}
			cout<<"\n El Precio Es: "<<aum;
		}
	}
	if(cod==3){
		//Auricular Tipo Vincha
		if(canv==1){
			pre=700;
			cout<<"\n El Precio Es: "<<pre;
			if(cod2==1){
				des=pre/5;
				total=pre-des;
				cout<<"\n Y Con Descuento De: "<<des;
				cout<<"\n Seria En Total: "<<total;
			}
			if(cod2==2){
				rec=pre*3;
				cout<<"\n Con el Recargo Seria En Total: "<<rec;
			}
		}
		if(canv>1){
			pre=890;
			aum=pre*canv;
			if(cod2==1){
				des=aum/5;
				cout<<"\n El Precio Es: "<<aum <<"\n Con Descuento Seria: "<<des;
			}
			cout<<"\n El Precio Es: "<<aum;
		}
	}
	
	return 0;
}
