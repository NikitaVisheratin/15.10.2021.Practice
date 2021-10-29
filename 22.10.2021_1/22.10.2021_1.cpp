#include <iostream>

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
}

void DeleteArray(int* A, int& len) {
	delete[] A;
}

int main() {
	int len;
	std::cout << "Input array length:" << std::endl;
	std::cin >> len;
	int* array = CreateArray(len);
	ArrayOutput(array, len);
	DeleteArray(array, len);
}