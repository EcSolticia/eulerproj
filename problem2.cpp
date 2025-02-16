#include <iostream>
#include <cmath>

unsigned int F(unsigned int n) {
	if (n == 2) {
		return 1;
	}
	double a = (1/sqrt(5));
	double p = (1 + sqrt(5));
	double q = (1 - sqrt(5));
	return a*pow(p/2, n) - a*pow(q/2, n);
}


bool is_even(unsigned int x) {
	int m = x % 2;
	return (m == 0);
}

int main() {

	unsigned int sum = 0;
	unsigned int point = 2;
	unsigned int fib_point = 0;
	while (fib_point < 4000000) {
		fib_point = F(point);
		point++;
		
		if (is_even(fib_point)) {
			sum += fib_point;
			std::cout << "Sum so far..." << sum << std::endl;
		}
		
	}

	std::cout << "The sum is..." << sum << std::endl; 

	return 0;
}
