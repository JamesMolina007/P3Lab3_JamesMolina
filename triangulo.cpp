#include "triangulo.hpp"
#include <iostream>
#include <math.h>

using namespace std;

triangulo :: triangulo( double lado1, double lado2, double lado3 ){
	l1 = lado1;
	l2 = lado2;
	l3 = lado3;
	calcular_area();
	altura = ( 2 * area ) / lado2;
}

void triangulo :: setLado1( double lado1 ){
	l1 = lado1;
}

void triangulo :: setLado2( double lado2 ){
        l2 = lado2;
}


void triangulo :: setLado3( double lado3 ){
        l3 = lado3;
}


void triangulo :: calcular_area(){
	double suma = l1 + l2 + l3;
	suma /= 2;
	area = sqrt( suma * ( suma - l1 ) * ( suma - l2 ) * ( suma - l3 ) );
}
