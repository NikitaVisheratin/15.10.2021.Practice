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

void InvertedArrayOutput(int* A, int& len) {
	for (int *p = A + len - 1; p >= A; --p) {
		std::cout << "[" << *p << "] ";
		}
	std::cout << std::endl;
}

void DeleteArray(int* A, int& len) {
	delete[] A;
}

int main() {
	int len;
	std::cout << "Input array length:" << std::endl;
	std::cin >> len;
	int* array = CreateArray(len);
	InvertedArrayOutput(array, len);
	DeleteArray(array, len);
	return 0;
}