#include "Simple_fraction.h"
#include <iostream>

void Simple_fraction::set_simple_fraction (int numerator, int denominatior){
	Simple_fraction::numerator = numerator;
	Simple_fraction::denominatior = denominatior;

}
int Simple_fraction::get_numerator(){
	return Simple_fraction::numerator;
}
int Simple_fraction::get_denominatior(){
	return Simple_fraction::denominatior;
}

void Simple_fraction::print_simple_fraction(std::string sf_name){
	    std::cout<<"Simple fraction "
			<<sf_name
			<<" = "
			<<Simple_fraction::numerator
			<<"/"
			<<Simple_fraction::denominatior
			<<"\n";
}

void Simple_fraction::simplify_simple_fraction(){
	int min_v = (numerator<denominatior)?numerator:denominatior;
	int simplify_done = 0;
	for (int n = min_v; n > 1; n--){

		if ((Simple_fraction::numerator % n == 0) && (Simple_fraction::denominatior % n == 0))
		{
			Simple_fraction::numerator = Simple_fraction::numerator / n;
			Simple_fraction::denominatior = Simple_fraction::denominatior / n;
			simplify_done = 1;
			std::cout<<"Simplify done\n";
		}
	} 
	if(!simplify_done)
	{
	std::cout<<"Fraction is simple yet\n";
	}
}