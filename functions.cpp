#include <iostream>
#include <math.h>

// main func
double calcFunc(double a, double b, char op) {
	double result = 0;

	if (op == '+')
		result = a + b;
	else if (op == '-')
		result = a - b;
	else if (op == '/')
		result = a / b;
	else if (op == '*')
		result = a * b;
	else if (op == '%')
		result = (int)a % (int)b;
	else if (op == '^') {
		result = pow(a, b);
	else	
		std::cout << "Invalid Input" << std::endl;

	return result;
}
// cls func
void cls() {
	system("cls");
}
