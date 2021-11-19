#include <iostream>

bool IsLucky(int &arr) { //Функция проходит по массиву с двух сторон и выводит true, если сумма первых трёх цифр равна сумме трёх последних.
	int left_sum = 0;
	int right_sum = 0;
	for (int i = 0; i < 3; ++i) { 
		left_sum += arr[i];
		right_sum += arr[5 - i];
	}
	if (left_sum == right_sum) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	int array[6];
	for (int i = 0; i < 6; ++i) {  //Заполняем массив длиной шесть
		std::cin >> array[i];
	}
	if (IsLucky(array)) {
		std::cout << "Lucky" <<std::endl;
	}
	else {
		std::cout << "Not lucky" << std::endl;
	}
}