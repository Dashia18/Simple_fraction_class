#include <string>
#include <iostream>

class Simple_fraction{

public:
	bool set_simple_fraction(int num, int den);
	Simple_fraction();
	Simple_fraction(int num, int den);
	Simple_fraction(int num);
	int get_numerator() const;
	int get_denominatior() const;
	void print_simple_fraction(const std::string& sf_name);
	
	
	//operator overloading (+,-,*,/)
	friend Simple_fraction operator+ (const Simple_fraction& sf_a, const Simple_fraction& sf_b);
	friend Simple_fraction operator- (const Simple_fraction& sf_a, const Simple_fraction& sf_b);
	friend Simple_fraction operator* (const Simple_fraction& sf_a, const Simple_fraction& sf_b);
	friend Simple_fraction operator/ (const Simple_fraction& sf_a, const Simple_fraction& sf_b);

	//operator overloading (+,-,*,/) for double
	double operator+ (const double& double_d);
	friend double operator+ (const double& double_d, const Simple_fraction& sf_a){ 
		Simple_fraction a = sf_a;
		double add_res = a + double_d;
		return add_res;
		//sf_a + double_d - don`t work
		};
	double operator- (const double& double_d);
	double operator* (const double& double_d);
	double operator/ (const double& double_d);

	//operator overloading (<<) for cout
	friend std::ostream& operator<< (std::ostream& out, const Simple_fraction& sf_a);
	
	
private:
	int numerator;
	int denominatior;
	Simple_fraction(double num, double den);
	void simplify_simple_fraction();
};