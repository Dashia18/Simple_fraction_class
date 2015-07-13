#include "Simple_fraction.h"
#include <iostream>


int main(){
	Simple_fraction sf_a;
	Simple_fraction sf_b;
	bool fa, fb;

	fa = sf_a.set_simple_fraction(3,0);
	fb = sf_b.set_simple_fraction(1,2);

	sf_a.print_simple_fraction("sf_a");
	sf_b.print_simple_fraction("sf_b");

	sf_a.add_sf(sf_b);
	//sf_a.sub_sf(sf_b);
	//sf_a.mul_sf(sf_b);
	//sf_a.div_sf(sf_b);

	
	return 0;
}

