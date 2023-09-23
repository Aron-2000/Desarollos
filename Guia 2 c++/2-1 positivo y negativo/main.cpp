#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a=0;
	cout<<"\n Ingrese un numero ";
	cin>>a;
	if(a>0){
		cout<<"\n Su Numero Es Positivo:";
	}
	else {
		cout<<"\n Su Numero Es Negativo:";
	}
	
	return 0;
}
