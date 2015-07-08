#include "Simple_fraction.h"
#include <iostream>
#include <math.h>


void Simple_fraction::set_simple_fraction (int numerator, int denominatior){
	
	
	if(denominatior==0)//???
	{
		std::cout<<"Input data incorrect!! Denominator cannot be equal 0!"
			<<"\n\n";
		denominatior= 1;
	}
	
	if(numerator==0)//???
	{
		denominatior= 1;
	}
	if (denominatior < 0)//???
	{
		numerator = numerator * (-1);
		denominatior = denominatior * (-1);
	}

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
	    
		if(Simple_fraction::denominatior==1 || Simple_fraction::numerator==0 )//???
		{
			std::cout<<"Simple fraction "
				<<sf_name
				<<" = "
				<<Simple_fraction::numerator
				<<"\n\n";
		}
		
		else
		{
			std::cout<<"Simple fraction "
				<<sf_name
				<<" = "
				<<Simple_fraction::numerator
				<<"/"
				<<Simple_fraction::denominatior
				<<"\n\n";
		}
}

void Simple_fraction::simplify_simple_fraction(){
	int min_v = (abs(numerator)<abs(denominatior))?abs(numerator):abs(denominatior);//abs!!!
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


//operations
void Simple_fraction::add_sf(Simple_fraction sf_b){
	Simple_fraction add_res;
	int n1 = numerator;
	int d1 = denominatior;
	int n2 = sf_b.get_numerator();
	int d2 = sf_b.get_denominatior();
	add_res.set_simple_fraction((n1 * d2 + n2 * d1),(d1 * d2));
	add_res.print_simple_fraction("add_res");
	add_res.simplify_simple_fraction();
	add_res.print_simple_fraction("add_res");
}
void Simple_fraction::sub_sf(Simple_fraction sf_b){
	Simple_fraction sub_res;
	int n1 = numerator;
	int d1 = denominatior;
	int n2 = sf_b.get_numerator();
	int d2 = sf_b.get_denominatior();
	sub_res.set_simple_fraction((n1 * d2 - n2 * d1),(d1 * d2));
	sub_res.print_simple_fraction("sub_res");
	sub_res.simplify_simple_fraction();
	sub_res.print_simple_fraction("sub_res");
}
void Simple_fraction::mul_sf(Simple_fraction sf_b){
	Simple_fraction mul_res;
	int n1 = numerator;
	int d1 = denominatior;
	int n2 = sf_b.get_numerator();
	int d2 = sf_b.get_denominatior();
	mul_res.set_simple_fraction((n1 * n2),(d1 * d2));
	mul_res.print_simple_fraction("mul_res");
	mul_res.simplify_simple_fraction();
	mul_res.print_simple_fraction("mul_res");
}
void Simple_fraction::div_sf(Simple_fraction sf_b){
	Simple_fraction div_res;
	int n1 = numerator;
	int d1 = denominatior;
	int n2 = sf_b.get_numerator();
	int d2 = sf_b.get_denominatior();
	div_res.set_simple_fraction((n1 * d2),(d1 * n2));
	div_res.print_simple_fraction("div_res");
	div_res.simplify_simple_fraction();
	div_res.print_simple_fraction("div_res");
}