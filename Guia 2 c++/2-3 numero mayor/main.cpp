#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n1,n2=0;
	n1=0;
	n2=0;
	cout<<"\n ingrese un numero: ";
	cin>>n1;
	cout<<"\n ingrese otro numero: ";
	cin>>n2;
	if(n1>n2){
		cout<<"\n El Mayor Es: "<<n1;
	}
	else{
		cout<<"\n El Mayor Es: "<<n2;
	}
	
	
	return 0;
}
