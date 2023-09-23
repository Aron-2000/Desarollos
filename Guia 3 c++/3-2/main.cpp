#include <iostream>
using namespace std;
/* Ingresar las edades y estaturas de los 5 jugadores de un equipo de básquet e informar el promedio de edades y de 
estaturas. */

int main(int argc, char** argv) {
	int j1,j2,j3,j4,j5;
	float ed,es1,es2,es3,es4,es5,prom,prome;	
	j1=0;
	j2=0;
	j3=0;
	j4=0;
	j5=0;
	ed=0;
	es1=0;
	es2=0;
	es3=0;
	es4=0;
	es5=0;
	prom=0;
	prome=0;
	cout<<"\n Ingrese La Edad Del Primer Jugador: ";
	cin>>j1;
	cout<<"\n Ingrese La Estatura Del Primer Jugador: ";
	cin>>es1;
	cout<<"\n Ingrese La Edad Del Segundo Jugador: ";
	cin>>j2;
	cout<<"\n Ingrese La Estatura Del Segundo Jugador: ";
	cin>>es2;
	cout<<"\n Ingrese La Edad Del Tercer Jugador: ";
	cin>>j3;
	cout<<"\n Ingrese La Estatura Del Tercer Jugador: ";
	cin>>es3;
	cout<<"\n Ingrese La Edad Del Cuarto Jugador: ";
	cin>>j4;
	cout<<"\n Ingrese La Estatura Del Cuarto Jugador: ";
	cin>>es4;
	cout<<"\n Ingrese La Edad Del Quinto Jugador: ";
	cin>>j5;
	cout<<"\n Ingrese La Estatura Del Quinto Jugador: ";
	cin>>es5;
	prom=(j1+j2+j3+j4+j5)/5;
	prome=(es1+es2+es3+es4+es5)/5;
	cout<<"\n El Promedio de edad es: "<<prom;
	cout<<"\n El Promedio de estatura es: "<<prome;

	return 0;
}
