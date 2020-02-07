#pragma once


class triangulo{
	private:
		double l1, l2, l3, area, altura;
		void calcular_area();
	public:
		triangulo();
		triangulo( double lado1, double lado2, double lado3 );
		void setLado1( double lado1 );
		void setLado2( double lado2 );
		void setLado3( double lado3 );
		double calculoarea(){ return area; };
		double calculoaltura(){ return altura; };
		double getLado1() { return l1; };
		double getLado2() { return l2; };
		double getLado3() { return l3; };
};

