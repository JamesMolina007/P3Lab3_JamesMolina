#include <iostream>
#include "triangulo.hpp"
#include "circulo.hpp"
#include "piramide.hpp"
#include "piramide.hpp"
#include "esfera.hpp"

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
		cout << endl << endl;
		switch( opcion ){
			case 1:{
				datos_sucesion();
			       }break;
			case 2:{
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
			       }break;
			case 3:{
				float radio;
				cout <<  "Ingrese el radio del circulo: ";
				cin >> radio;
				circulo c( radio );
				float perimetro = c.perimetro();
			        float area_c = c.areacirculo();
				cout << "El area del circulo es: " << area_c << endl;
				cout << "El perimetro del circulo es: " << perimetro << endl << endl;
			       }break;	
			case 4:{
				double lado11, lado22, lado33;
				cout << "Ingrese lado 1: ";
				cin >> lado11;
				cout << "Ingrese base: ";
				cin >> lado22;
				cout << "Ingrese lado 3: ";
				cin >> lado33;
				triangulo t2( lado11, lado22, lado33 );
				double altura;
				cout << "Ingrese la altura de la piramide: ";
				cin >> altura;
				piramide piramid( lado22, altura );
				cout << "El volumen de la piramide es: " <<  piramid.calculo_volumen() << endl << endl;
			       }break;
			case 5:{
				float radio2;
				cout << "Ingrese el radio del circulo: ";
				cin >> radio2;
				circulo c ( radio2 );
				esfera e ( radio2 );
				cout << "El volumen de la esfera es: " << e.calculo_volumen() << endl << endl;
			       }break;
		}		
	}


}
