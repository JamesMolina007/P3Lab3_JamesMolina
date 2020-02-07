#pragma once
#include "triangulo.hpp"
class piramide{
	private:
		double altura, volumen, base;
		triangulo t;	
	public:
		piramide();
		piramide( triangulo tt, double alto );
		double calculo_volumen() { return volumen; };

};
