#include <iostream>

int number_of_digits(long long number) {

	long long b = number;
	int c = 0;

	if (number < 1) {

		return 0;

	}

	if (number > 0) {

		++c;

	}

	return number_of_digits(number / 10);	

	return c;
}

int main() {

	long long number = 9223372036854775806;
	int c = 0;
	long long b = number;
	int d = 0;

	c = number_of_digits(number);
	
	std::cout << c;
	for (int i = 0; i < c; ++i) {

		b = number % 10;
		number = number / 10;
		

		if (b % 2 == 0) {

			++d;

		}

	}

	std::cout << d;
}