#include <iostream>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int menu();
void Sumatoria(int);
void Operacion(int);

int main(int argc, char** argv) {
	
	int opcion=0;

	while((opcion = menu()) != 3){
			
		if(opcion==1){
				int num=0;
				
				while(num<1){
					cout<< "ingrese un numero: ";
					cin >> num;
				}
				Sumatoria(num);	
				
		}else {
				
			if(opcion == 2){
				int x=0;
				cout << "ingrese un valor x: ";
				cin >>x;
				Operacion(x);
			}
		}
	}
	return 0;
}
	
	int menu(){
			
		int opc=0;
		cout<<"\n* * * * * Escoja una Opcion * * * * *"<<endl<<"	 1. Ejercicio 1"<<endl<<"	 2. Ejercicio 2"<<endl<<"	 3. Salirse"<<endl;
		cout<<"\nIngrese que opcion desea: ";
		cin >> opc;             
		return opc;
	}
		
	void Sumatoria(int n){
			
	double acum=0;
		for(int i=1; i<=n; i++){
			double num=2.0 *i -1.0 ;
			double den= i * ( i + 1.0 );
			acum+=num / den;
		}
		cout<<"La sumatoria del numero "<<n<<" es: "<<acum<<endl;
	}
		
	void Operacion(int x){
		double resul = 1.0 / (1.0 + exp(x)) ;
		cout << "La operacion del numero "<< x <<" es: " << resul << endl;			
	}

