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
	std::cout<<"sf_a = "<<sf_a<<"\n\n";
	std::cout<<"sf_b = "<<sf_b<<"\n\n";
	std::cout<<"int_c = "<< int_c<<"\n\n";
	std::cout<<"double_d = "<< double_d<<"\n\n";
	
	//operator overloading (+,-,*,/)
    std::cout<<"Summa  sf_a + sf_b \n";		sf_a + sf_b;
	std::cout<<"Summa  int_c + sf_a \n";	int_c + sf_a;
	std::cout<<"Summa  double_d + sf_a = ";	double_d +sf_a;
		
	//sf_a - sf_b;
	//sf_a * sf_b;
	//sf_a / sf_b;

	return 0;
}

