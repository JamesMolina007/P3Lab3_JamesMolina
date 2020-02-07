#include <iostream>
#include "esfera.hpp"

esfera :: esfera( circulo circulito ){
	c = circulito;
	radio = c.getRadio();
	volumen = ( 3.14159265359 * 4 * radio * radio * radio ) / 3;
}
