//Написать функцию сравнения указателей.
#include <iostream>

bool IsEqualAddress(const int &a, const int &b) {
	return (&a == &b);
}

int main() {
	int a = 10;
	int b = 5;
	int* p_1 = &a;
	int* p_2 = &a;
	int* p_3 = &b;
	std::cout << IsEqualAddress(*p_1, *p_2) << std::endl;
	std::cout << IsEqualAddress(*p_1, *p_3) << std::endl;
}