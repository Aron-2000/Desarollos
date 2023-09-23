#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int sueldo,incre,nuevs=0;
	sueldo=0;
	incre=0;
	nuevs=0;
	cout<<"\n Ingrese Su Sueldo: ";
	cin>>sueldo;
	incre=sueldo*0.30;
	nuevs=sueldo+incre;
	cout<<"\n Su Sueldo Con Incremento Es: "<<nuevs;
	
	return 0;
}
