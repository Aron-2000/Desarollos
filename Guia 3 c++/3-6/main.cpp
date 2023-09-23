#include <iostream>
using namespace std;
/* Se ingresan por teclado las notas obtenidas por tres alumnos en un parcial de cierta materia. Se desea saber 
cuáles de estos alumnos resultaron aplazados y además se pide determinar cuál fue la mayor nota y cuál fue el 
alumno que la obtuvo */

int main(int argc, char** argv) {
	int a1,a2,a3,nt,ma;
	a1=a2=a3=nt=ma=0;
	cout<<"\n ingrese la nota del primer alumno: ";
	cin>>a1;
	cout<<"\n ingrese la nota del segundo alumno: ";
	cin>>a2;
	cout<<"\n Ingrese la nota del tercer alumno: ";
	cin>>a3;
	if(a1<7){
		cout<<"\n El Alumno 1 Ha Sido Desplazado";
	}
	if(a2<7){
		cout<<"\n El Alumno 2 Ha sido desplazado";
	}
	if(a3<7){
		cout<<"\n El Alumno 3 Ha Sido desplazado";
	}
	if(a1>a2 && a1>a3){
	cout<<"\n La Mayor nota fue:"<<a1;
	}
	if(a2>a1 && a2>a3){
		cout<<"\n La Mayor Nota Fue:"<<a2;
	}
	if(a3>a1 && a3>a2){
		cout<<"\n La mayor nota fue:"<<a3;
	}
	
	return 0;
}
