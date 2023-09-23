#include <iostream>
using namespace std;
/* 11. Una empresa de turismo vende viajes para egresados de colegios secundarios, ofrece a tres cursos distintos la 
siguiente promoción:
El costo del viaje por persona es $8000, pero si el grupo excede las 40 personas, la empresa realiza un descuento 
del 5% sobre el costo total del viaje para el curso.
Realizar un programa que, cargando la cantidad de alumnos de cada uno de los 3 cursos, permita determinar:
a) el curso más numeroso
b) el monto del viaje para cada curso */

int main(int argc, char** argv) {
	int c1,c2,c3,cos,cos2,cos3,des,total;
	c1=c2=c3=cos=cos2=cos3=des=total=0;
	cout<<"\n Ingrese La Cantidad De Alumnos Que Viajan del Curso 1: ";
	cin>>c1;
	cout<<"\n Ingrese La Cantidad De Alumnos Que Viajan del Curso 2: ";
	cin>>c2;
	cout<<"\n Ingrese La Cantidad De Alumnos Que Viajan del Curso 3: ";
	cin>>c3;
	if(c1>c2 && c1>c3){
		if(c1>=40){
			cos=8000*c1;
			des=cos/5;
			total=cos-des;
			cout<<"\n El Coste Del Viaje Del Curso 1 Es: "<<cos <<"\n Con Descuento De: "<<des <<"\n Seria en total: "<<total;
		}
		if(c1<40){
			cos=8000*c1;
			cout<<"\n El Coste Del Viaje Del Curso 1 Es: "<<cos;
		}
		cos2=c2*8000;
		cos3=c3*8000;
		cout<<"\n El Coste del Viaje Del Curso 2 Es: "<<cos2;
		cout<<"\n El Coste Del Viaje Del Curso 3 Es: "<<cos3;
	}
	if(c2>c1 && c2>c3){
			if(c2>=40){
			cos=8000*c2;
			des=cos/5;
			total=cos-des;
			cout<<"\n El Coste Del Viaje Del Curso 2 Es: "<<cos <<"\n Con Descuento De: "<<des <<"\n Seria en total: "<<total;
		}
		if(c2<40){
			cos=8000*c2;
			cout<<"\n El Coste Del Viaje Del Curso 2 Es: "<<cos;
		}
		cos2=c1*8000;
		cos3=c3*8000;
		cout<<"\n El Coste del Viaje Del Curso 1 Es: "<<cos2;
		cout<<"\n El Coste Del Viaje Del Curso 3 Es: "<<cos3;
	}
	if(c3>c1 && c3>c2){
			if(c3>=40){
			cos=8000*c3;
			des=cos/5;
			total=cos-des;
			cout<<"\n El Coste Del Viaje Del Curso 3 Es: "<<cos <<"\n Con Descuento De: "<<des <<"\n Seria en total: "<<total;
		}
		if(c1<40){
			cos=8000*c3;
			cout<<"\n El Coste Del Viaje Del Curso 3 Es: "<<cos;
		}
		cos2=c1*8000;
		cos3=c2*8000;
		cout<<"\n El Coste del Viaje Del Curso 1 Es: "<<cos2;
		cout<<"\n El Coste Del Viaje Del Curso 2 Es: "<<cos3;
	}
	
	return 0;
}
