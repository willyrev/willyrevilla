#include<iostream>
using namespace std;
int main(){
	float ventas, comision;
	cout<<"Ingrese sus ventas realizadas: "; cin>>ventas;
	if (ventas>=0 & ventas<=200) {
		comision=ventas*0;
	 }else if(ventas>=201 & ventas<=1000) {
			comision=ventas*0.10;
		 }else if (ventas>=1001 & ventas<=2000) {
				comision=ventas*0.15;
			 }else if (ventas>=2001 & ventas<=3000) {
					comision=ventas*0.20;
				 }else if(ventas>=3001 & ventas<=4000) {
						comision=0.25;
					 }else if (ventas>4000) {
							comision=ventas*0.30;
						}
	cout<<"Su comision sera de: "<<comision;	
}

