#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int edad=0;
	cout<<"\n Ingrese su edad: ";
	cin>>edad;
	if(edad>=18){
		cout<<"\n Usted Es Mayor De Edad: ";
	}
	else{
		cout<<"\n Usted Es Menor De Edad: ";
	}
	
	
	return 0;
}
