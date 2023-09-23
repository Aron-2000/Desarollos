#include <iostream>
using namespace std;
/* 10. Ingresar 3 números distintos. Determinar el menor de ellos y calcular el cuadrado y el cubo del mismo. */

int main(int argc, char** argv) {
	int n1,n2,n3,cua,cub;
	n1=n2=n3=cua=cub=0;
	cout<<"\n Ingrese un Numero: ";
	cin>>n1;
	cout<<"\n Ingrese Otro Numero: ";
	cin>>n2;
	cout<<"\n ingrese un Numero: ";
	cin>>n3;
	if(n1<n2 && n1<n3){
		if(n1>1){
			cua=n1*n1;
		cub=n1*n1*n1;
		cout<<"\n El Menor Es: "<<n1;
		cout<<"\n El Cuadrado Es: "<<cua<< "\n Y el Cubo Es: "<<cub;
		}
		if(n1==1){
			cout<<"\n Se Ingreso 1 y El Cuadrado y Cubo Es: 1";
		}
		if(n1==0){
			cout<<"\n Imposible Obtener el Cuadrado y el Cubo";
		}
	}
	if(n2<n1 && n2<n3){
		if(n2>1){
		cua=n2*n2;
		cub=n2*n2*n2;
		cout<<"\n El Menor Es: "<<n2;
		cout<<"\n El Cuadrado Es: "<<cua<< "\n Y el Cubo Es: "<<cub;	
		}
		if(n2==1){
			cout<<"\n Se Ingreso 1 y El Cuadrado y Cubo Es: 1";
		}
		if(n2==0){
			cout<<"\n Imposible Obtener el Cuadrado y el Cubo";
		}
	}
	if(n3<n1 && n3<n2){
		if(n3>1){
		cua=n3*n3;
		cub=n3*n3*n3;
		cout<<"\n El Menor Es: "<<n3;
		cout<<"\n El Cuadrado Es: "<<cua<< "\n Y el Cubo Es: "<<cub;	
		}
		if(n3==1){
			cout<<"\n Se Ingreso 1 y El Cuadrado y Cubo Es: 1";
		}
		if(n3==0){
			cout<<"\n Imposible Obtener el Cuadrado y el Cubo";
		}
	}
	
	return 0;
}
