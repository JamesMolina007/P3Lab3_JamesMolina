#include "piramide.hpp"
#include <iostream>

using namespace std;

piramide :: piramide( double b, double alto ){
	base = b;
	altura = alto;
	volumen = ( ( base * base * altura ) / 3 );
}
