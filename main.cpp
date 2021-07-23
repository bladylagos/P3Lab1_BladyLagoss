#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int menu=0;
	
	while(menu!=3) {
		
		cout<<"\n* * * * * Escoja una Opcion * * * * *\n"<<endl<<"	  1. Ejercicio 1"<<endl<<"	  2. Ejercicio 2"<<endl<<"	  3. Salir!!!\n"<<endl;
		
		cin>>menu;
		
		if(menu==1) {
			
			int num;
			cout<<"\nIngrese numero: "<<endl;
			
			cin>> num;
			
			//decision
			if(num<0) {
				cout<<"Ingrese solo numeros positivos"<<endl;
			}
			//calculos y declaracion de variables
            double suma = 0;
            for (int n = 1; n <= num; n++) {
                double signo = 1;
                for (int i = 1; i <= n; i++) {
                    signo = -signo;
                }
                double num = 3;
                for (int i = 1; i <= 2 * n; i++) {
                    num = num * n;
                }
                double denum = 1;
                for (int i = 1; i <= 2 * n + 1; i++) {
                    denum = denum * i;
                }
                //calculo de la sumatoria
                suma = suma + signo * num / denum;
            }
			cout<<"La respuesta es: "<<suma<<"\n";
		}
		
		if(menu==2){
			//
		}
   } 
	return 0;
}