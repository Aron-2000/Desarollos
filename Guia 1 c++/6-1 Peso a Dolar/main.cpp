#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int peso,dolar=0;
	peso=0;
	dolar=0;
	cout<<"\n Ingrese La Cantidad De Pesos ";
	cin>>peso;
	dolar=peso/213.76;
	cout<<"Los Dolares Que Tienes Son: "<<dolar;
	
	
	return 0;
}
