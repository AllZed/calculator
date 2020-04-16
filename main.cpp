#include <iostream>
#include <math.h>

#include "functions.h"

int main() {
	char choice = '+';

	double p1, p2 = 0;

	std::cout << "+, -, /, *, %, ^" << std::endl;
	std::cout << "NOTE: If Using Modulus Operator Number Cannot Contain Decimals" << std::endl;
	std::cout << "Operator: ";

	std::cin >> choice;

	system("cls");

	/*if (choice != '+' | '-' | '/' | '*' | '^')
		std::cout << "Invalid Operator" << std::endl;*/

	std::cout << "Number 1: ";
	std::cin >> p1;

	system("cls");
	
	std::cout << "Number 2: ";
	std::cin >> p2;

	system("cls");

	std::cout << "Result: " << calcFunc(p1, p2, choice) << std::endl;

	system("PAUSE");

	return 0;
}