#include <string>

class Simple_fraction{

public:
	void set_simple_fraction(int num, int den);
	int get_numerator();
	int get_denominatior();
	void print_simple_fraction(std::string& sf_name);
	void simplify_simple_fraction();

	//operations
	void add_sf(const Simple_fraction& sf_b);
	void sub_sf( Simple_fraction& sf_b);
	void mul_sf( Simple_fraction& sf_b);
	void div_sf( Simple_fraction& sf_b);

	
private:
	int numerator;
	int denominatior;
};