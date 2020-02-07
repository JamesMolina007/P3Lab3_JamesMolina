#pragma once
#include "circulo.hpp"

class esfera{
	private:
		double radio;
		float volumen;
		circulo c;
	public:
		esfera();
		esfera( circulo circle );
		int calculo_volumen(){ return volumen; };
};
