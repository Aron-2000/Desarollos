#include <iostream>
using namespace std;
/*  Solicitar el ingreso de dos números distintos. Calcular el cuadrado del menor de ellos y el cubo del 
mayor de ellos. Mostrar los resultados obtenidos. (Por ahora asumir que los números son distintos, las 
validaciones las estudiaremos en el siguiente tema)
 */

int main(int argc, char** argv) {
	int a,b,cm,cma;
	a=0;
	b=0;
	cm=0;
	cma=0;
	cout<<"\n Ingrese un numero: ";
	cin>>a;
	cout<<"\n ingrese otro numero: ";
	cin>>b;
	if(a>b){
		cma=a*a;
		cm=b*b*b;
		cout<<"\n El Mayor Es: "<<cma;
		cout<<"\n El Menor Es: "<<cm;
	}
	else if(b>a){
		cma=b*b;
		cm=a*a*a;
		cout<<"\n El Mayor Es: "<<cma;
		cout<<"\n El Menor Es: "<<cm;
	}
	else{
		cout<<"Error";
	}
	
	return 0;
}
