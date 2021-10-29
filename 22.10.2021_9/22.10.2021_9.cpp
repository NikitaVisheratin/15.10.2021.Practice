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

int main() {
	int len;
	std::cout << "Input array length:" << std::endl;
	std::cin >> len;
	int* array = CreateArray(len);

	QuickSort(array, 0, len - 1);
	ArrayOutput(array, len);

	DeleteArray(array, len);
	return 0;
}