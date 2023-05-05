#include <iostream>

void number_of_digits(int& number, int& c) {	

	if (number < 1) {

		return;
	}
	
	number = number / 10;
	
	++c;

	number_of_digits(number, c);	

	return;
}

int main() {

	int number = 543210;

	int c = 0;
	
	number_of_digits(number, c);
	
	std::cout << " sdfghdhdfh = " << c;
}