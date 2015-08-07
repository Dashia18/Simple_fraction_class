#include <string>
#include <iostream>
#include <cstdlib>

class Simple_fraction{

public:
	bool set_simple_fraction(int num, int den);
	Simple_fraction();
	Simple_fraction(int num, int den);
	Simple_fraction(int num);
	int get_numerator() const;
	int get_denominatior() const;
	void print_simple_fraction(const std::string& sf_name) const;
	
	
	//operator overloading (+,-,*,/) for sf+sf
	friend Simple_fraction operator+ (const Simple_fraction& sf_a, const Simple_fraction& sf_b);
	friend Simple_fraction operator- (const Simple_fraction& sf_a, const Simple_fraction& sf_b);
	friend Simple_fraction operator* (const Simple_fraction& sf_a, const Simple_fraction& sf_b);
	friend Simple_fraction operator/ (const Simple_fraction& sf_a, const Simple_fraction& sf_b);

	//operator overloading (+,-,*,/) for sf+double
	double operator+ (const double& double_d) const;
	double operator- (const double& double_d) const;
	double operator* (const double& double_d) const;
	double operator/ (const double& double_d) const;

	//operator overloading (+,-,*,/) for double+sf
	friend void operator+ (const double& double_d, const Simple_fraction& sf_a){sf_a + double_d;};
	friend void operator- (const double& double_d, const Simple_fraction& sf_a){sf_a - double_d;};
	friend void operator* (const double& double_d, const Simple_fraction& sf_a){sf_a * double_d;};
	friend void operator/ (const double& double_d, const Simple_fraction& sf_a){sf_a / double_d;};

	//operator overloading (<<) for cout
	friend std::ostream& operator<< (std::ostream& out, const Simple_fraction& sf_a);
	
	
private:
	int numerator;
	int denominatior;
	Simple_fraction(double num, double den);
	bool simplify_simple_fraction();
};