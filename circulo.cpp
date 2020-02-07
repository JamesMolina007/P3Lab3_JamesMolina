#include "circulo.hpp"
#include <iostream>

using namespace std;


circulo :: circulo( float r ){
	diametro = 2*r;
	radio = r;
	calculo_circunferencia();
	calculo_area();
		
}

void circulo :: calculo_circunferencia(){
	circunferencia = diametro * 3.14159265359;	
}

void circulo :: calculo_area(){
	area = 3.14159265359 * radio * radio;
}



