#include "Simple_fraction.h"
#include <iostream>

void print_number(std::string n_name, int& int_number);
void print_number(std::string n_name, double& double_number);
int main(){
	Simple_fraction sf_a;
	Simple_fraction sf_b;
	int int_c = 2;
	double add_res, double_d = 2.35;

	sf_a.set_simple_fraction(3,4);
	sf_b.set_simple_fraction(1,2);

	
	sf_a.print_simple_fraction("sf_a");
	sf_b.print_simple_fraction("sf_b");

	sf_a.add_sf(sf_b);
	
	//sf_a.sub_sf(sf_b);
	//sf_a.mul_sf(sf_b);
	//sf_a.div_sf(sf_b);

	//operator overloading(+)
	sf_a + sf_b;
	

	//Int & double ADD
	  //print_number("int_c", int_c);	
	  //sf_a.add_i(int_c);

	  //add_res = sf_a.add_d(double_d);
	  //print_number("double_d", double_d);
	  //print_number("add_res = sf_a + double_d", add_res);
	
	
	

	
	return 0;
}

//print int number
void print_number(std::string n_name, int& int_number){
	std::cout<<"Number "
		<<n_name
		<<" = "
		<<int_number
		<<"\n\n";
}
//print double number
void print_number(std::string n_name, double& double_number){
	std::cout<<"Number "
		<<n_name
		<<" = "
		<<double_number
		<<"\n\n";
}
