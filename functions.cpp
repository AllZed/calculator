#include <iostream>
#include <math.h>

// main func
double calcFunc(double a, double b, char op) {
	double result = 0;

	switch (op) {
		case '+':
			result = a + b;
			break;
		case '-':
			result = a - b;
			break;
		case '/':
			result = a / b;
			break;
		case '*':
			result = a * b;
			break;
		case '%':
			result = (int)a % (int)b;
			break;
		case '^':
			result = pow(a, b);
			break;
		default:
			std::cout << "Invalid Input" << std::endl;
			break;
	}

	return result;
}
// cls func
void cls() {
	system("cls");
}
