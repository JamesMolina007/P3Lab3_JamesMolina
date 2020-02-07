#include "esfera.hpp"
#include <iostream>

esfera :: esfera( double radio ){
	volumen = ( 3.14159265359 * 4 * radio * radio * radio ) / 3;
}
