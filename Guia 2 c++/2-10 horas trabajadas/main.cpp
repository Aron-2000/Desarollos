#include <iostream>
using namespace std;
/* Determinar la cantidad de dinero que recibirá un trabajador por concepto de las horas extras trabajadas 
en una empresa, sabiendo que cuando las horas de trabajo exceden de 40, el resto se consideran horas 
extras y que estas se pagan al doble de una hora normal cuando no exceden de 8; si las horas extras 
exceden de 8 se pagan las primeras 8 al doble de lo que se pagan las horas normales y el resto al triple.
 */

int main(int argc, char** argv) {
	int su,h,he,hn;
	su=0;
	h=0;
	he=0;
	hn=0;
	cout<<"Ingrese su sueldo: ";
	cin>>su;
	cout<<"\n ingrese las horas trabajadas: ";
	cin>>h;
	if(h>40){
		hn=h-40;
		cout<<"\n Su sueldo es: "<<(su*40)+((hn*su)*2);
	}
	if(h>48){
		hn=h-48;
		he=(8*su)*2;
		cout<<"\n Su Sueldo Es: "<<(su*40)+he+((hn*su)+3);
	}
	if(h<40){
		cout<<"\n Su Sueldo Es: "<<su*h;
	}
	
	return 0;
}
