#include "Simple_fraction.h"
#include <iostream>

void print_number(std::string n_name, int& int_c);
int main(){
	Simple_fraction sf_a;
	Simple_fraction sf_b;
	int int_c = 2;
	bool fa, fb;

	sf_a.set_simple_fraction(3,4);
	sf_b.set_simple_fraction(1,2);

	/*if(sf_a.set_simple_fraction(3,0) == false)
	{
		fa=0;
		return -1;
	*/
	sf_a.print_simple_fraction("sf_a");
	sf_b.print_simple_fraction("sf_b");
	print_number("int_c", int_c);

	
	sf_a.add(int_c);
	//sf_a.add_sf(sf_b);
	//sf_a.sub_sf(sf_b);
	//sf_a.mul_sf(sf_b);
	//sf_a.div_sf(sf_b);

	
	return 0;
}

void print_number(std::string n_name, int& int_c){
	std::cout<<"Number "
		<<n_name
		<<" = "
		<<int_c
		<<"\n\n";
}
