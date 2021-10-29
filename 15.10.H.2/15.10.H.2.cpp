#include <iostream>
#include <cstdlib>

int** CreateArray(const int& x, const int& y) {
	int** array = new int* [x];
	for (int i = 0; i < x; ++i) {
		array[i] = new int[y];
	}
	return array;
}

void RandomFillArray(int** array, const int& x, const int& y) {
	for (int i = 0; i < x; ++i) {
		for (int j = 0; j < y; ++j) {
			array[i][j] = rand() % 41 + 10;
		}
	}
}

void OutputArray(int** array, const int& x, const int& y) {
	for (int i = 0; i < x; ++i) {
		for (int j = 0; j < y; ++j) {
			std::cout << "[" << array[i][j] << "] ";
		}
		std::cout << std::endl;
	}
}

void DeleteArray(int** array, const int& x) {
	for (int i = 0; i < x; ++i) {
		delete[] array[i];
	}
	delete[] array;
}

int main() {
	int arr_length_x;
	int arr_length_y;
	std::cout << "Input number of rows and columns:\n";
	std::cin >> arr_length_x >> arr_length_y;
	srand(arr_length_x);
	int** new_array = CreateArray(arr_length_x, arr_length_y);
	RandomFillArray(new_array, arr_length_x, arr_length_y);
	OutputArray(new_array, arr_length_x, arr_length_y);
	DeleteArray(new_array, arr_length_x);
	return 0;
}