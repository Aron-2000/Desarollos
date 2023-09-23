#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int an,aac,ed=0;
	an=0;
	aac=0;
	ed=0;
	cout<<"\n Ingrese el año actual: ";
	cin>>aac;
	cout<<"\n Ingrese el año de nacimiento: ";
	cin>>an;
	ed=aac-an;
	cout<<"\n Su Edad Es: "<<ed;
	
	return 0;
}
