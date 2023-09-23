#include <iostream>
using namespace std;
/* Una empresa dedicada al alquiler de autos, tiene a disposición los siguientes autos:
|Código	|   |Descripción 	 |	|Precio por Día|
|1.     |   |Volkswagen Gol  |	|$380		   |
|2. 	|	|Toyota Corolla  |	|$1000		   |
|3. 	|	|Volkswagen Vento| 	|$900		   |
|4. 	|	|Renault Logan 	 |	|$530          |
|5. 	|	|Chevrolet Zafira| 	|$500          |
Realizar un programa que permita ingresar los datos correspondientes a un alquiler: 
Código y cantidad de días de alquiler. Calcular y mostrar el importe total a pagar.
Si el importe a pagar supera los $6000, realizar un descuento del 10% sobre la venta y mostrar el nuevo importe */

int main(int argc, char** argv) {
	int codigo,dias,importe,precio,tp,des,total;
	codigo=dias=importe=precio=tp=des=total=0;
	
	cout<<"\n Seleccione El Veiculo que Desea Alquilar: ";
	cout<<"\n 1. Volkswagen Gol ";
	cout<<"\n 2. Toyota Corolla ";
	cout<<"\n 3. Volkswagen Vento ";
	cout<<"\n 4. Renault Logan ";
	cout<<"\n 5. Chevrolet Zafira ";
	cout<<"\n Ingrese el codigo Del Veiculo: ";
	cin>>codigo;
	cout<<"\n Ingrese los dias que Desea Alquilar: ";
	cin>>dias;
	if(codigo==1){
		if(dias==1){
			precio=380;
			cout<<"\n Usted Debe Pagar: "<<precio;
		}
		if(dias>1){
			precio=380;
			tp=precio*dias;
			cout<<"\n Usted Debe Pagar: "<<tp;
			if(tp>6000){
				des=tp/10;
				total=tp-des;
				cout<<"\n con descuento de: "<<des<<"\n Serian en total unos: "<<total;
			}
		}
		
	}
	if(codigo==2){
		if(dias==1){
			precio=1000;
			cout<<"\n Usted Debe Pagar: "<<precio;
		}
		if(dias>1){
			precio=1000;
			tp=precio*dias;
			cout<<"\n Usted Debe Pagar: "<<tp;
			if(tp>6000){
				des=tp/10;
				total=tp-des;
				cout<<"\n con descuento de: "<<des<<"\n Serian en total unos: "<<total;
			}
		}
		
	}
	if(codigo==3){
		if(dias==1){
			precio=900;
			cout<<"\n Usted Debe Pagar: "<<precio;
		}
		if(dias>1){
			precio=900;
			tp=precio*dias;
			cout<<"\n Usted Debe Pagar: "<<tp;
			if(tp>6000){
				des=tp/10;
				total=tp-des;
			cout<<"\n con descuento de: "<<des<<"\n Serian en total unos: "<<total;	
			}
		}
	
	}
	if(codigo==4){
		if(dias==1){
			precio=530;
			cout<<"\n Usted Debe Pagar: "<<precio;
		}
		if(dias>1){
			precio=530;
			tp=precio*dias;
			cout<<"\n Usted Debe Pagar: "<<tp;
			if(tp>6000){
				des=tp/10;
				total=tp-des;
				cout<<"\n con descuento de: "<<des<<"\n Serian en total unos: "<<total;
			}
		}
		
	}
	if(codigo==5){
		if(dias==1){
			precio=500;
			cout<<"\n Usted Debe Pagar: "<<precio;
		}
		if(dias>1){
			precio=500;
			tp=precio*dias;
			cout<<"\n Usted Debe Pagar: "<<tp;
			if(tp>6000){
				des=tp/10;
				total=tp-des;
				cout<<"\n con descuento de: "<<des<<"\n Serian en total unos: "<<total;
			}
		}
		
	}
	
	
	return 0;
}
