#include "Simple_fraction.h"
#include <iostream>

void print_number(std::string n_name, int& int_number);
void print_number(std::string n_name, double& double_number);

template <typename T>
void make_value_like_fraction(const T& val,Simple_fraction& val_make_fraction){
	T denominator = 100000;
	T numerator = val * denominator;

	
	val_make_fraction.set_simple_fraction(numerator,denominator);
	val_make_fraction.print_simple_fraction("val_make_fraction"); //test
	val_make_fraction.simplify_simple_fraction();
	val_make_fraction.print_simple_fraction("val_make_fraction");//test
}

int main(){
	Simple_fraction sf_a;
	Simple_fraction sf_b;
	Simple_fraction sf_c;
	Simple_fraction sf_d;

	int int_c = 2; 
	make_value_like_fraction(int_c, sf_c);//function for all types to make them like fraction

	double add_sf_a_doudle_d, double_d = 2.357435;
	make_value_like_fraction(double_d, sf_d);//function for all types to make them like fraction
	
	sf_a.set_simple_fraction(3,4);
	sf_b.set_simple_fraction(1,2);

	
	sf_a.print_simple_fraction("sf_a");
	sf_b.print_simple_fraction("sf_b");
	sf_c.print_simple_fraction("sf_c");
	sf_d.print_simple_fraction("sf_d");
	

	//operator overloading (+,-,*,/)
	std::cout<<"Summa  sf_a + sf_c \n\n";
	sf_a + sf_c;
	std::cout<<"Summa  sf_a + sf_d \n\n";
	sf_a + sf_d;
	


	//sf_a - sf_b;
	//sf_a * sf_b;
	//sf_a / sf_b;


	//Int & double ADD
	 // print_number("int_c", int_c);	
	  //sf_a.add_i(int_c);

	/*add_sf_a_doudle_d = sf_a.add_d(double_d);
	print_number("double_d", double_d);
	print_number("add_res = sf_a + double_d", add_sf_a_doudle_d);
	
	*/
	

	
	return 0;
}

//print int number
//void print_number(std::string n_name, int& int_number){
//	std::cout<<"(int) Number "
//		<<n_name
//		<<" = "
//		<<int_number
//		<<"\n\n";
//}
////print double number
//void print_number(std::string n_name, double& double_number){
//	std::cout<<"(double)Number "
//		<<n_name
//		<<" = "
//		<<double_number
//		<<"\n\n";
//}
