#include <iostream>
#include <string>

bool Comparison(std::string a, std::string b) { //Сравниваем два имени, выводим true, если в лексикографическом порядке первое слово стоит дальше.
	int length = (a.length() < b.length()) ? (a.length()) : (b.length());
	int i;
	for (i = 0; i < length; ++i) {
		if ((int(a[i]) - int(b[i])) > 0) {
			return true;
		}
		else if ((int(a[i]) - int(b[i])) < 0) {
			return false;
		}
	}

	if (i == length) {
		return ((a.length() > b.length()) ? (true) : (false)); //Если при сравнении букв в словах закончилось одно из слов, то выводим true, если первое слово длиннее.
	}
}

void SortStringArray(std::string *array, int length) { //Сортировка вставками.
	for (int i = 1; i < length; ++i) {
		for (int j = i; j > 0 && Comparison(array[j - 1], array[j]); --j) {
			std::string swap = array[j-1];
			array[j - 1] = array[j];
			array[j] = swap;
		}
	}
}


int main()
{
	int number_of_names;
	std::cin >> number_of_names;
	//Создадим массив строк:
	std::string* names = new std::string[number_of_names];
	//Заполним его:
	for (int i = 0; i < number_of_names; ++i) {
		std::cin >> names[i];

	}
	SortStringArray(names, number_of_names);
	//Выводим массив:
	for (int j = 0; j < number_of_names; ++j) {
		std::cout << "[" << names[j] << "] ";
	}
	return 0;
}
