#include "piramide.hpp"
#include <iostream>

using namespace std;

piramide :: piramide( triangulo tt, double alto ){
	t = tt;
	base = t.getLado2();
	altura = alto;
	volumen = ( ( base * base * altura ) / 3 );
}
