#include <iostream>

int SumOfDigits(int a) { //Возвращает сумму цифр числа
	int sum = 0;
	while (a / 10 != 0) {
		sum += a % 10;
		a /= 10;
	}
	sum += a % 10;
	return sum;
}

bool IsSameSum(int &i) { //Проверяет, остаётся ли той же сумма цифр.
	for (int j = 2; j < 10; ++j) {
		if (SumOfDigits(i) != SumOfDigits(i * j)) {
			return false;
		}
	}
	return true;
}

int main() {
	int a;
	int b;
	std::cout << "Input a, b:\n";
	std::cin >> a >> b;
	for (int i = a; i <= b; ++i) {
		if (IsSameSum(i)) {
			std::cout << i << std::endl;
		}
	}
	return 0;
}