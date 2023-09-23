#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
int dia=0;
cout<<"\n ingrese un dia: ";
cin>>dia;
switch(dia)
{		case 1: cout<<"\n El Dia Es Lunes";
        break;
        case 2: cout<<"\n El Dia Es Martes";
        break;
        case 3: cout<<"\n El Dia Es Miercoles";
        break;
        case 4: cout<<"\n El Dia Es Jueves";
        break;
        case 5: cout<<"\n El Dia Es Viernes";
        break;
        case 6: cout<<"\n El Dia Es Sabado";
        break;
        case 7: cout<<"\n El Dia Es Domingo";
        break;
        default: cout<<"\n Error";
}
	
	return 0;
}
