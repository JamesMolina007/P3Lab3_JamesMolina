#include "circulo.hpp"
#include <iostream>

using namespace std;

circulo :: circulo(){
}

circulo :: circulo( int r ){
	diametro = 2*r;
	calculo_circunferencia();
		
}

void circulo :: calculo_circunferencia(){
	circunferencia = diametro * 3.14159265359;	
}

void circulo :: calculo_area(){
	area = 3.14159265359 * radio * radio;
}



