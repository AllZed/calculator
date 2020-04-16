#include <iostream>
#include <math.h>

#include "functions.h"

int main() {
	// vars
	char choice = '+';

	double p1, p2 = 0;

	// asking user input
	std::cout << "+, -, /, *, %, ^" << std::endl;
	std::cout << "NOTE: If Using Modulus Operator Number Cannot Contain Decimals" << std::endl;
	std::cout << "Operator: ";

	// getting user input
	std::cin >> choice;

	cls();

	// end program if invalid operator
	if (choice != '+' | '-' | '/' | '*' | '%' | '^')
		std::cout << "Invalid Operator" << std::endl;
		system("PAUSE");
		return 0;
	
	// first number
	std::cout << "Number 1: ";
	std::cin >> p1;

	cls();
	
	// second number
	std::cout << "Number 2: ";
	std::cin >> p2;

	cls();

	// result
	std::cout << "Result: " << calcFunc(p1, p2, choice) << std::endl;

	cls();

	return 0;
}