#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n1,n2,n3,n4,n5,su,pr=0;
	n1=0;
	n2=0;
	n3=0;
	n4=0;
	n5=0;
	su=0;
	pr=0;
	cout<<"\n Ingrese un numero: ";
	cin>>n1;
	cout<<"\n Ingrese un numero: ";
	cin>>n2;
	cout<<"\n Ingrese un numero: ";
	cin>>n3;
	cout<<"\n Ingrese un numero: ";
	cin>>n4;
	cout<<"\n Ingrese un numero: ";
	cin>>n5;
	su=n1+n2+n3+n4+n5;
	pr=su/5;
	cout<<"\n La Suma Es: "<<su;
	cout<<"\n El Promedio Es: "<<pr;
	
	return 0;
}
