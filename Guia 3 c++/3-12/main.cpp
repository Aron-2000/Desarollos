#include <iostream>
using namespace std;
/* 12. Una empresa dedicada al transporte de encomiendas tiene las siguientes tarifas:
Destino		 	Peso Encomienda 	 	Tarifa  
1-Buenos Aires  					  		  
			  	 1- Hasta 5 kg.	  	 	 1- $ 450	
			  	 2- De 6 a 10 kg.	  	 2- $ 600
			  	 3- De 11 kg a 20 kg.	 3- $ 800
--------------------------------------------------				
2-Córdoba 		1- Hasta 5 kg.			1- $ 490
				2- De 6 a 10 kg			2- $ 700
				3- De 11 kg a 20 kg.	3- $ 1000
--------------------------------------------------				
3-Tucumán 		1- Hasta 5 kg.			1- $ 500
				2- De 6 a 10 kg			2- $ 850
				3- De 11 kg a 20 kg.	3- $ 1400
--------------------------------------------------
Realizar un programa que cargando el destino y el peso de las encomiendas permita determinar el importe total a 
pagar
 */

int main(int argc, char** argv) {
	int dest,peso,valor;
	dest=peso=valor=0;
	cout<<"\n\t ******* Opciones: ";
	cout<<"\n 1-Buenos Aires ";
	cout<<"\n 2-Cordoba ";
	cout<<"\n 3-Tucuman ";
	cout<<"\n Ingrese el Destino que desea: ";
	cin>>dest;
	cout<<"\n\t ******* Seleccion: ";
	cout<<"\n 1- Hasta 5 kg. ";
	cout<<"\n 2- De 6 a 10 kg. ";
	cout<<"\n 3- De 11 kg a 20 kg. ";
	cout<<"\n Ingrese El peso encomienda: ";
	cin>>peso;
	if(dest==1){
		if(peso==1){
			valor=450;
			cout<<"\n Usted Debera Pagar en total: "<<valor;
		}	
		if(peso==2){
			valor=600;
			cout<<"\n Usted Debera Pagar en total: "<<valor;
		}	
		if(peso==3){
			valor=800;
			cout<<"\n Usted Debera Pagar en total: "<<valor;
		}	
		
	}
	if(dest==2){
		if(peso==1){
			valor=490;
			cout<<"\n Usted Debera Pagar en total: "<<valor;
		}	
		if(peso==2){
			valor=700;
			cout<<"\n Usted Debera Pagar en total: "<<valor;
		}	
		if(peso==3){
			valor=1000;
			cout<<"\n Usted Debera Pagar en total: "<<valor;
		}	
		
	}
	if(dest==3){
		if(peso==1){
			valor=500;
			cout<<"\n Usted Debera Pagar en total: "<<valor;
		}	
		if(peso==2){
			valor=850;
			cout<<"\n Usted Debera Pagar en total: "<<valor;
		}	
		if(peso==3){
			valor=1400;
			cout<<"\n Usted Debera Pagar en total: "<<valor;
		}	
		
	}
	
	return 0;
}
