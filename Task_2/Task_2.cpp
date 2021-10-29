#include <iostream>

void Swap(int& a, int& b) {
	int t = a;
	a = b;
	b = t;
}


void QuickSort(int* array, int left, int right) {
	int pivot = array[left];
	int l = left;
	int r = right;
	while (l < r) {
		while ((array[r] >= pivot) && (l < r)) {
			--r;
		}
		if (l != r) {
			Swap(array[l], array[r]);
			++l;
		}
		while ((array[l] <= pivot) && (l < r)) {
			++l;
		}
		if (l != r) {
			Swap(array[l], array[r]);
			--r;
		}
	}
	if (left < l) {
		QuickSort(array, left, l - 1);
	}
	if (right > l) {
		QuickSort(array, l + 1, right);
	}
}


int Max(int* &array, int &len) { //Возвращает максимальный элемент массива, который встречается более одного раза.
	for (int i = len - 1; i > 1; --i) {
		if (array[i] == array[i - 1]) {
			return array[i];
		}
	}
	return 0;
}

int main() {
	int len;
	std::cout << "Input length:\n";
	std::cin >> len;
	int* array = new int[len]; //Создали динамический массив.
	for (int i = 0; i < len; ++i) { //Заполнили динамический массив.
		std::cin >> array[i];
	}
	QuickSort(array, 0, len - 1); //Сортируем массив.
	Max(array, len);
	delete[] array; //Очистили память после завершения программы.
}