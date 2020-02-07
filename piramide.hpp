#pragma once

class piramide{
	private:
		double altura, volumen, base;
		
	public:
		piramide();
		piramide( double b, double alto );
		double calculo_volumen() { return volumen; };

};
