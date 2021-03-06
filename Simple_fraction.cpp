#include "Simple_fraction.h"


bool Simple_fraction::set_simple_fraction (int num, int den){
	
	//condition  1
	if(den==0)
	{
		std::cout<<"Input data incorrect!! Denominator cannot be equal 0!"
			<<"\n\n";
		return false;
		den= 1;
	}
	else
	{
	//condition  2
	if(num==0)
	{
		den= 1;
	}

	//condition  3
	if (den < 0)
	{
		num = num * (-1);
		den = den * (-1);
	}

	numerator = num;
	denominatior = den;
	return true;
	}
}

int Simple_fraction::get_numerator() const{
	return numerator;
}
int Simple_fraction::get_denominatior() const{
	return denominatior;
}

Simple_fraction::Simple_fraction(){
	set_simple_fraction(0, 1);
}
Simple_fraction::Simple_fraction(int num, int den){
	set_simple_fraction(num, den);
}
Simple_fraction::Simple_fraction(int num){
	set_simple_fraction(num, 1);
}


void Simple_fraction::print_simple_fraction(const std::string& sf_name) const{
	    
		if(Simple_fraction::denominatior==1 || Simple_fraction::numerator==0 )//???
		{
			std::cout<<"Simple fraction "
				<<sf_name
				<<" = "
				<<numerator
				<<"\n\n";
		}
		
		else
		{
			std::cout<<"Simple fraction "
				<<sf_name
				<<" = "
				<<numerator
				<<"/"
				<<denominatior
				<<"\n\n";
		}
}
bool Simple_fraction::simplify_simple_fraction(){
	bool tipe_of_simplify = 1; // 0 - min(abs(numerator,denominatior)) 1 - Euclid Algorithm 
	bool simplify_done = 0;
	int NOD;

	if (tipe_of_simplify==0)
	{
		int min_v = (std::abs(numerator)<std::abs(denominatior))?std::abs(numerator):std::abs(denominatior);//abs!!!
		for (int n = min_v; n > 1; n--){
			if ((numerator % n == 0) && (denominatior % n == 0))
			{
				NOD = n;
			}
		} 
	} 
	else
	{
		int a = numerator;
		int b = denominatior;

		while (a!=b)
		{
			if (a>b)
			{
				a=a-b;
			} 
			else
			{
				b=b-a;
			}
		}
		NOD = a;	
	}

	if (NOD!=1)
	{
		numerator = numerator / NOD;
		denominatior = denominatior / NOD;
		simplify_done = 1;
		std::cout<<"Simplify done\n";
	} 
	if(!simplify_done)
	{
	std::cout<<"Fraction is simple yet\n";
	}
	return simplify_done;
}


//operator overloading Simple_fraction + Simple_fraction (+,-,*,/)
Simple_fraction operator+ (const Simple_fraction& sf_a, const Simple_fraction& sf_b){
	Simple_fraction add_res;
	int n1, d1, n2, d2;
	n1 = sf_a.get_numerator();
	d1 = sf_a.get_denominatior();
	n2 = sf_b.get_numerator();
	d2 = sf_b.get_denominatior();
	
	add_res.set_simple_fraction((n1 * d2 + n2 * d1),(d1 * d2));
	add_res.print_simple_fraction("add_res");
	add_res.simplify_simple_fraction();
	add_res.print_simple_fraction("add_res");
	return add_res;
}
Simple_fraction operator- (const Simple_fraction& sf_a, const Simple_fraction& sf_b){
	Simple_fraction sub_res;
	int n1 = sf_a.get_numerator();
	int d1 = sf_a.get_denominatior();
	int n2 = sf_b.get_numerator();
	int d2 = sf_b.get_denominatior();
	sub_res.set_simple_fraction((n1 * d2 - n2 * d1),(d1 * d2));
	sub_res.print_simple_fraction("sub_res");
	sub_res.simplify_simple_fraction();
	sub_res.print_simple_fraction("sub_res");
	return sub_res;
}
Simple_fraction operator* (const Simple_fraction& sf_a, const Simple_fraction& sf_b){
	Simple_fraction mul_res;
	int n1 = sf_a.get_numerator();
	int d1 = sf_a.get_denominatior();
	int n2 = sf_b.get_numerator();
	int d2 = sf_b.get_denominatior();
	mul_res.set_simple_fraction((n1 * n2),(d1 * d2));
	mul_res.print_simple_fraction("mul_res");
	mul_res.simplify_simple_fraction();
	mul_res.print_simple_fraction("mul_res");
	return mul_res;
}
Simple_fraction operator/ (const Simple_fraction& sf_a, const Simple_fraction& sf_b){
	Simple_fraction div_res;
	int n1 = sf_a.get_numerator();
	int d1 = sf_a.get_denominatior();
	int n2 = sf_b.get_numerator();
	int d2 = sf_b.get_denominatior();
	div_res.set_simple_fraction((n1 * d2),(d1 * n2));
	div_res.print_simple_fraction("div_res");
	div_res.simplify_simple_fraction();
	div_res.print_simple_fraction("div_res");
	return div_res;
}

//operator overloading Simple_fraction + double (+,-,*,/)
double Simple_fraction::operator+ (const double& double_d) const{
	double add_res;
	double sf_a = double(numerator)/double(denominatior);
	add_res = sf_a + double_d;
	std::cout<< add_res<<"\n\n";
	return add_res;
}
double Simple_fraction::operator- (const double& double_d) const{
	double sub_res;
	double sf_a = double(numerator)/double(denominatior);
	sub_res = sf_a - double_d;
	std::cout<< sub_res<<"\n\n";
	return sub_res;
}
double Simple_fraction::operator* (const double& double_d) const{
	double mult_res;
	double sf_a = double(numerator)/double(denominatior);
	mult_res = sf_a * double_d;
	std::cout<< mult_res<<"\n\n";
	return mult_res;
}
double Simple_fraction::operator/ (const double& double_d) const{
	double div_res;
	double sf_a = double(numerator)/double(denominatior);
	div_res = sf_a / double_d;
	std::cout<< div_res<<"\n\n";
	return div_res;
}

//operator overloading print << Simple_fraction
std::ostream& operator<< (std::ostream& out, const Simple_fraction& sf_a){

	
	out <<"(operator >> overloading) SF = "<< sf_a.numerator << '/' << sf_a.denominatior<<"\n\n";
	return out;
}

