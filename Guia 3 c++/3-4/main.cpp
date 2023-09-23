#include <iostream>
using namespace std;
/* Ingresar la cantidad de bancos en un aula, y la cantidad de alumnos inscriptos para ese curso, determinar si 
alcanzan los bancos existentes. De no ser así, informar además cuántos bancos sería necesario agregar */

int main(int argc, char** argv) {
	int alumnos,bancos,extras;
	alumnos=0;
	bancos=0;
	extras=0;
	cout<<"\n ingrese la cantidad de bancos: ";
	cin>>bancos;
	cout<<"\n Ingrese la cantidad de alumnos: ";
	cin>>alumnos;
	if(alumnos>bancos){
		extras=alumnos-bancos;
		cout<<"\n Debe agregarse: "<<extras <<" bancos";
	}
	else{
		cout<<"\n Hay Suficientes Bancos.";
	}
	
	return 0;
}
