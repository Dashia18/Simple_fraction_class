#include <string>

class Simple_fraction{

public:
	bool set_simple_fraction(int num, int den);
	int get_numerator() const;
	int get_denominatior() const;
	void print_simple_fraction(const std::string& sf_name);
	void simplify_simple_fraction();

	//operations
	void add_sf(const Simple_fraction& sf_b);
	void sub_sf(const Simple_fraction& sf_b);
	void mul_sf(const Simple_fraction& sf_b);
	void div_sf(const Simple_fraction& sf_b);

	
private:
	int numerator;
	int denominatior;
};