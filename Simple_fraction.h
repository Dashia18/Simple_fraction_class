#include <string>
#include <iostream>

class Simple_fraction{

public:
	bool set_simple_fraction(int num, int den);
	Simple_fraction();
	Simple_fraction(int num, int den);
	int get_numerator() const;
	int get_denominatior() const;
	void print_simple_fraction(const std::string& sf_name);
	void simplify_simple_fraction();
	
	//operator overloading (+,-,*,/)
	Simple_fraction operator+ (const Simple_fraction& sf_b);
	Simple_fraction operator- (const Simple_fraction& sf_b);
	Simple_fraction operator* (const Simple_fraction& sf_b);
	Simple_fraction operator/ (const Simple_fraction& sf_b);

	double operator+ (const double& sf_d);
	Simple_fraction operator+ (const int& sf_d);
	friend std::ostream& operator<< (std::ostream& out, const Simple_fraction& sf_a);
	
private:
	int numerator;
	int denominatior;
	Simple_fraction(double num, double den);
};