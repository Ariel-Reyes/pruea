#include <iostream>
#include <math.h>
using namespace std;
// Ariel Fernando Reyes Castellanos (11921023)
int main() {
	int opcion =0;

	while(opcion!=3) {
     /*Creacion del menu*/
		cout<<"......Menu......."<<endl;
		cout<<"1) Formula uno"<<endl;
		cout<<"2) Formula dos(PI)"<<endl;
		cout<<"3) Salir"<<endl;
		cout<<"Ingrese la opcion que desea: "<<endl;
		cin>>opcion;

		switch(opcion) {
			case 1: {
				double euler_x;
				cout<<"Ingrese el valor de Euler"<<endl;
				cin>>euler_x;
				euler_x = -(euler_x);

				double e_variable= exp(euler_x);
				double parte_abajo = 1 + e_variable;
				double total = 1/parte_abajo;
				cout<<"La respues es: "<<total<<endl;
				break;
			}
			case 2: {
				double n, i=1;
				double total;
				cout<<"Ingrese el valor de N: "<<endl;
				cin>>n;

				while(i<=n) {
					double arriba = pow(-1,i);
					double abajo = (2*i)+1;
					double fraccion = arriba/abajo;
					double almacenar = 4*(fraccion);
					total = total + almacenar;
					i++;
				}
				cout<<"El total de la sumatoria es: "<<total<<endl;
				break;
			}
			case 3: {
				cout<<"Saliendo..."<<endl;
				break;
			}
			default: {
				cout<<"Esta opcion no existe"<<endl;
				break;
			}
		}

	}



	return 0;
}