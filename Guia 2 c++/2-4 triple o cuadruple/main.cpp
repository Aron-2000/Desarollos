#include <iostream>
using namespace std;
/* Confeccione un algoritmo que lea un número y si este es mayor o igual a 10 devuelva el triple de este 
de lo contrario la cuarta parte de este.
 */

int main(int argc, char** argv) {
	int n1,res=0;
	n1=0;
	res=0;
	cout<<"\n Ingrese Un Numero: ";
	cin>>n1;
	if(n1>=10){
		res=n1*3;
		cout<<"\n El triple es: "<<res;
	}
	else{
		res=n1/4;
		cout<<"\n La Cuarta parte es: "<<res;
	}
	
	return 0;
}
