#include <iostream>
#include <algorithm>

void FillArray(int* array, int& len) {
	std::cout << "Input line:\n";
	for (int i = 0; i < len; ++i) {
		int value;
		std::cin >> value;
		array[i] = value;
	}
}

int* CreateArray(int& len) {
	int* A = new int[len];
	FillArray(A, len);
	return A;
}

void ArrayOutput(int* A, int& len) {
	for (int* p = A; p < A + len; ++p) {
		std::cout << "[" << *p << "] ";
	}
	std::cout << std::endl;
}

void DeleteArray(int* A, int& len) {
	delete[] A;
}

void Swap(int& a, int& b) {
	int t = a;
	a = b;
	b = t;
}

void ComparisonFunction(int *array, const int &a) {
	for (int i = a - 1; (i >= 0) && (array[i+1] < array[i]); --i) {
		Swap(array[i + 1], array[i]);
	}
}

void InsertionSort(int* array, int &len) {
	for (int i = 1; i < len; ++i) {
		ComparisonFunction(array, i);
	}
}

int main() {
	int len;
	std::cout << "Input array length:" << std::endl;
	std::cin >> len;
	int* array = CreateArray(len);

	InsertionSort(array, len);
	ArrayOutput(array, len);

	DeleteArray(array, len);
	return 0;
}