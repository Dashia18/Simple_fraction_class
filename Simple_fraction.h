#include <string>

class Simple_fraction{

public:
	void set_simple_fraction(int numerator, int denominatior);
	int get_numerator();
	int get_denominatior();
	void print_simple_fraction(std::string sf_name);
	void simplify_simple_fraction();

	
private:
	int numerator;
	int denominatior;
};