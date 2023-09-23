#include <iostream>
using namespace std;
/* 13. Determinar el ingreso de dos alumnos a una Academia de Inglés, se ingresan por teclado las notas de los 
exámenes nivelatorios y las edades de los alumnos.
-La Academia lo inscribirá en un curso de acuerdo a lo siguiente:
• Si aprobó el examen, va a la división A; sino a la división B.
• Si la edad va hasta 10 años inclusive, muestre “CURSO 1”. Si la edad va de 10 a 20 años, muestre “CURSO 
2”. 
-Si la edad es mayor de 20 años muestre “CURSO 3”.
• Por otro lado, si el alumno aprobó con 9 o 10, informar que se le otorgan Becas.
Nota: Se aprueba el examen nivelatorio con 6 */

int main(int argc, char** argv) {
	int nota,alum1,alum2,ed1,ed2;
	nota=alum1=alum2=ed1=ed2=0;
	cout<<"\n Ingrese la Nota del Primer Alumno: ";
	cin>>alum1;
	cout<<"\n Ingrese la Edad del Primer Alumno: ";
	cin>>ed1;
	cout<<"\n Ingrese la Nota del Segundo Alumno: ";
	cin>>alum2;
	cout<<"\n Ingrese la Edad del Segundo Alumno: ";
	cin>>ed2;
	if(alum1>=6){
		cout<<"\n El Alumno 1 Ha Conseguido Entrar a La Division A";
		if(ed1==10){
			cout<<"\n En El Curso 1 ";
		}
		if(ed1>10 && ed1<=20){
				cout<<"\n En El Curso 2 ";
		}
		if(ed1>20){
				cout<<"\n En El Curso 3 ";
		}
		if(alum1>=9){
			cout<<"\n\t Felicidades! Alumno 1 Eres elegible para una beca: ";
		}
	}
	if(alum1<6){
			cout<<"\n El Alumno 1 Ha Conseguido Entrar a La Division B";
		if(ed1==10){
			cout<<"\n En El Curso 1 ";
		}
		if(ed1>10 && ed1<=20){
				cout<<"\n En El Curso 2 ";
		}
		if(ed1>20){
				cout<<"\n En El Curso 3 ";
		}
	}
	if(alum2>=6){
		cout<<"\n El Alumno 2 Ha Conseguido Entrar a La Division A";
		if(ed2==10){
			cout<<"\n En El Curso 1 ";
		}
		if(ed2>10 && ed1<=20){
				cout<<"\n En El Curso 2 ";
		}
		if(ed2>20){
				cout<<"\n En El Curso 3 ";
		}
		if(alum2>=9){
			cout<<"\n\t Felicidades! Alumno 2 Eres elegible para una beca: ";
		}
	}
	if(alum2<6){
			cout<<"\n El Alumno 2 Ha Conseguido Entrar a La Division B";
		if(ed2==10){
			cout<<"\n En El Curso 1 ";
		}
		if(ed2>10 && ed1<=20){
				cout<<"\n En El Curso 2 ";
		}
		if(ed2>20){
				cout<<"\n En El Curso 3 ";
		}
	}
	
	return 0;
}
