#pragma once

class esfera{
	private:
		double radio;
		float volumen;
	public:
		esfera();
		esfera( double radio );
		int calculo_volumen(){ return volumen; };
};
