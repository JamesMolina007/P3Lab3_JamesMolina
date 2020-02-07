#include <iostream>
#include "triangulo.hpp"
#include "circulo.hpp"

using namespace std;


void sucesion( int m ){
	int numero = 1, incremento = 2, anterior = 1;
	for(int i = 1; i <= m; i++){
		if(numero > m ) break;
		anterior = numero;
		numero += incremento;
		incremento++;
	}
	cout << "Numero: " << anterior << endl << endl << endl;
}

void datos_sucesion(){
	int m;
	cout << "Ingrese m: ";
	cin >> m;
	sucesion( m );
}


int main(){
	int opcion = 1;
	while( opcion ){
		cout << endl << endl;
		cout << "0- Salir " << endl;
		cout << "1- Identificar numero triangular previo " << endl;
		cout << "2- Calcular area de triangulo " << endl;
		cout << "3- Calcular area de circulo " << endl;
	        cout << "4- Calcular volumen de piramide " << endl;
		cout << "5- Calcular volumen de esfera " << endl;	
		cout << "Ingrese la opcion: ";
		cin >> opcion;
		switch( opcion ){
			case 1:
				datos_sucesion();
				break;
			case 2:
				double lado1, lado2, lado3;
				cout << "Ingrese lado 1: ";
				cin >> lado1;
				cout << "Ingrese la base: ";
				cin >> lado2;
				cout << "Ingrese lado 3: ";
				cin >> lado3;
			        triangulo t( lado1, lado2, lado3 );  	
				double area = t.calculoarea();
				double altura =  t.calculoaltura();
				cout << "El area del triangulo es: " << area << endl;
				cout << "La altura del triangulo es: " << altura << endl << endl;
				break;
			case 3:
				double radio;
				cout <<  "Ingrese el radio del circulo: ";
				cin >> radio;
				circulo c( r );
				double perimetro = c.perimetro();
			        double area = c.calculo_area();
				cout << "El area del circulo es: " << area << endl;
				cout << "El perimetro del circulo es: " << perimetro << endl << endl;
				break;	
		}		
	}


}
