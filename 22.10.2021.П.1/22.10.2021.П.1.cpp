//Написать вычисление чисел Фибоначчи с рекурсией и без неё
#include <iostream>

int FibRecursion(const int& i) {
	if (i == 1) {
		return 0;
	}
	if (i == 2) {
		return 1;
	}
	return FibRecursion(i - 1) + FibRecursion(i - 2);
}

int FibLoop(const int& n) {
	int first = 0;
	int second = 1;
	int third = 1;
	for (int i = 1; i < n; ++i) {
		first = second;
		second = third;
		third = first + second;
	}
	return first;
}

int main() {
	int input_1;
	std::cout << "Input N of Fibonacci Recursion or 0 to use Fibonacci Loop:" << std::endl;
	while (std::cin >> input_1, input_1 != 0) {
		std::cout << "Fib number " << input_1 << " is " << FibRecursion(input_1) << std::endl;
		std::cout << "Input N of Fibonacci Recursion or 0 to use Fibonacci Loop:" << std::endl;
	}
	std::cout << "Input N of Fibonacci Loop or 0 to end the program:" << std::endl;
	while (std::cin >> input_1, input_1 != 0) {
		std::cout << "Fib number " << input_1 << " is " << FibLoop(input_1) << std::endl;
		std::cout << "Input N of Fibonacci Loop or 0 to end the program:" << std::endl;
	}
	return 0;
}