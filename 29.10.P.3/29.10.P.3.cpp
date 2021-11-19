#include <iostream>
#include <string>

int main() {
	std::string name, pnymic, surname;
	std::cin >> name >> pnymic >> surname;
	std::cout << surname << " " << name[0] << "." << pnymic[0] << "." << std::endl;
	return 0;
}