#pragma once

class circulo{
	private:
		float radio, diametro, circunferencia, area;
		void calculo_area();
		void calculo_circunferencia();
	public:
		circulo();
		circulo( float r );
		float perimetro(){ return circunferencia; };
		float areacirculo(){ return area; };
		double getRadio(){ return radio; };	

};
