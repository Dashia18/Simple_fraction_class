#include "Simple_fraction.h"
#include <iostream>


//function for all types to make them like fraction
template <typename T>
void make_value_like_fraction(const T& val,Simple_fraction& val_make_fraction){
	T denominator = 100000;
	T numerator = val * denominator;

	
	val_make_fraction.set_simple_fraction(numerator,denominator);
	val_make_fraction.print_simple_fraction("val_make_fraction"); //test
	val_make_fraction.simplify_simple_fraction();
	val_make_fraction.print_simple_fraction("val_make_fraction");//test
}
double meke_double_value(Simple_fraction& summ_a_d){
	double d_val = double(summ_a_d.get_numerator())/double(summ_a_d.get_denominatior());	
	std::cout<<"Summa  sf_a + sf_d double:\n\n"<<d_val;
	return d_val;
}

int main(){
	//announcement
	Simple_fraction sf_a;
	Simple_fraction sf_b;
	Simple_fraction sf_c;
	Simple_fraction sf_d;
	double add_sf_a_doudle_d;

	//initialization
	int int_c = 2; make_value_like_fraction(int_c, sf_c);
	double double_d = 2.357435; make_value_like_fraction(double_d, sf_d);
	sf_a.set_simple_fraction(3,4);
	sf_b.set_simple_fraction(1,2);

	//print values
	sf_a.print_simple_fraction("sf_a");
	sf_b.print_simple_fraction("sf_b");
	sf_c.print_simple_fraction("sf_c");
	sf_d.print_simple_fraction("sf_d");
	
	//operator overloading (+,-,*,/)
	std::cout<<"Summa  sf_a + sf_c \n\n";
	sf_a + sf_c;
	std::cout<<"Summa  sf_a + sf_d \n\n";
	Simple_fraction summ_a_d = sf_a + sf_d;
	meke_double_value(summ_a_d);
	
	//sf_a - sf_b;
	//sf_a * sf_b;
	//sf_a / sf_b;

	return 0;
}