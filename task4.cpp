#include <iostream>



void evendigits(long long& number, int& answer) {

	long long copy_number = number;
	
	if (number < 1) {

		return;

	}	

	copy_number = number % 10;
	number = number / 10;

	if (copy_number % 2 == 0) {

		++answer;

	}	

	return evendigits(number, answer);
	

}


int main() {

	long long number = 9223372036854775806;

	int answer = 0;

	evendigits(number, answer);
	
	std::cout << answer;
}