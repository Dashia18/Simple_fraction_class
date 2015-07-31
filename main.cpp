#include "Simple_fraction.h"
#include <iostream>



int main(){
	//announcement
	Simple_fraction sf_a;
	Simple_fraction sf_b;	
	

	//initialization	
	sf_a = Simple_fraction(3,4);
	sf_b= Simple_fraction(1,2);
	int int_c = 2; 
	double double_d = 2.357435;

	//print values
	sf_a.print_simple_fraction("sf_a");
	std::cout<<sf_a;




	sf_b.print_simple_fraction("sf_b");
	std::cout<<"int_c = "<< int_c<<"\n\n";
	std::cout<<"double_d = "<< double_d<<"\n\n";
	
	//operator overloading (+,-,*,/)
	
	Simple_fraction add_a_c = sf_a + int_c;
	std::cout<<"Summa  sf_a + sf_b ";
	sf_a + sf_b;

	std::cout<<"Summa  sf_a + double_d = ";
	double summ_a_d = sf_a + double_d;
	std::cout<< summ_a_d<<"\n\n";

	
	//sf_a - sf_b;
	//sf_a * sf_b;
	//sf_a / sf_b;

	return 0;
}