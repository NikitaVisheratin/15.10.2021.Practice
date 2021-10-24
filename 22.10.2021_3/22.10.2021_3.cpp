#include <iostream>
#include <cstdlib>

void FillArray(int** array, int& len_x, int& len_y) {
	for (int i = 0; i < len_x; ++i) {
		for (int j = 0; j < len_y; ++j) {
			array[i][j] = rand() % (101);
		}
	}
}

int** CreateArray(int& len_x, int& len_y) {
	int** A = new int* [len_x];
	for (int i = 0; i < len_x; ++i) {
		A[i] = new int[len_y];
	}
	FillArray(A, len_x, len_y);
	return A;
}

void DeleteArray(int** A, int& len_x) {
	for (int i = 0; i < len_x; ++i) {
		delete[] A[i];
	}
	delete[] A;
}

void ArrayOutput(int** A, int& len_x, int& len_y) {
	for (int i = 0; i < len_x; ++i) {
		for (int j = 0; j < len_y; ++j) {
			std::cout << "[" << A[i][j] << "] ";
		}
		std::cout << std::endl;
	}
}

int main() {
	int len_x;
	int len_y;
	std::cout << "Input number of rows and columns:" << std::endl;
	std::cin >> len_x >> len_y;
	int** array = CreateArray(len_x, len_y);
	ArrayOutput(array, len_x, len_y);
	DeleteArray(array, len_x);
	return 0;
}