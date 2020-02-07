#pragma once

class circulo{
	private:
		double radio, diametro, circunferencia, area;
	public:
		circulo();
		circulo( double r );
		void calculo_circunferencia();
		double perimetro(){ return circunferencia; };
		void calculo_area();
		double areacirculo(){ return area; };
		

}
