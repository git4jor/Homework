#include <iostream>

double myPow(double x, int n) {
	double result = 1;
	if (n == 0) {
		return 1;
	}
	if (n == 1) {
		return x;
	}
	if (n < 0) {
		result = myPow(1 / x * 1 / x, -1 * (double)n / 2);
		//std::cout << result << std::endl;
		if (n % 2) {
			result *= 1 / x;
		}
	}
	if (n > 0) {
		result = myPow(x * x, n / 2);
		//std::cout << result << std::endl;
		if (n % 2) {
			result *= x;
		}
	}

	return result;
}

int main() {
	myPow(4, 4);
	return 0;
}
