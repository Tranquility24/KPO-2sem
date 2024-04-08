#include <iostream>

int defaultparm(int c, int d, int e, int h, int m, int a = 10, int b = 20) {

	return (a + b + c + d + e + h + m) / 7;
}


int main() {

	std::cout << defaultparm(10, 20, 30, 40, 50) << std::endl;

	std::cout << defaultparm(10, 20, 30, 40, 50, 60, 70) << std::endl;

	return 0;
}