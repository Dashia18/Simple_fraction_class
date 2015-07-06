#include "Simple_fraction.h"
#include <iostream>


void add_sf(Simple_fraction sf_a, Simple_fraction sf_b);
void sub_sf(Simple_fraction sf_a, Simple_fraction sf_b);
void mul_sf(Simple_fraction sf_a, Simple_fraction sf_b);
void div_sf(Simple_fraction sf_a, Simple_fraction sf_b);

int main(){
	Simple_fraction sf_a;
	Simple_fraction sf_b;
	
	sf_a.set_simple_fraction(3,4);
	sf_b.set_simple_fraction(1,2);
	sf_a.print_simple_fraction("sf_a");
	sf_b.print_simple_fraction("sf_b");
	add_sf(sf_a, sf_b);
	sub_sf(sf_a, sf_b);
	mul_sf(sf_a, sf_b);
	div_sf(sf_a, sf_b);
	

return 0;
}

void add_sf(Simple_fraction sf_a, Simple_fraction sf_b){
	Simple_fraction add_res;
	int n1 = sf_a.get_numerator();
	int d1 = sf_a.get_denominatior();
	int n2 = sf_b.get_numerator();
	int d2 = sf_b.get_denominatior();
	add_res.set_simple_fraction((n1*d2 + n2*d1),(d1*d2));
	add_res.print_simple_fraction("add_res");
	add_res.simplify_simple_fraction();
	add_res.print_simple_fraction("add_res");
}
void sub_sf(Simple_fraction sf_a, Simple_fraction sf_b){
	Simple_fraction sub_res;
	int n1 = sf_a.get_numerator();
	int d1 = sf_a.get_denominatior();
	int n2 = sf_b.get_numerator();
	int d2 = sf_b.get_denominatior();
	sub_res.set_simple_fraction((n1*d2 - n2*d1),(d1*d2));
	sub_res.print_simple_fraction("sub_res");
	sub_res.simplify_simple_fraction();
	sub_res.print_simple_fraction("sub_res");
}
void mul_sf(Simple_fraction sf_a, Simple_fraction sf_b){
	Simple_fraction mul_res;
	int n1 = sf_a.get_numerator();
	int d1 = sf_a.get_denominatior();
	int n2 = sf_b.get_numerator();
	int d2 = sf_b.get_denominatior();
	mul_res.set_simple_fraction((n1 * n2),(d1 * d2));
	mul_res.print_simple_fraction("mul_res");
	mul_res.simplify_simple_fraction();
	mul_res.print_simple_fraction("mul_res");
}
void div_sf(Simple_fraction sf_a, Simple_fraction sf_b){
	Simple_fraction div_res;
	int n1 = sf_a.get_numerator();
	int d1 = sf_a.get_denominatior();
	int n2 = sf_b.get_numerator();
	int d2 = sf_b.get_denominatior();
	div_res.set_simple_fraction((n1 * d2),(d1 * n2));
	div_res.print_simple_fraction("div_res");
	div_res.simplify_simple_fraction();
	div_res.print_simple_fraction("div_res");
}