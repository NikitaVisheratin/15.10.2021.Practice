#include <iostream>
#include <cstdlib>
#include <string>

void ReplaceAmounts(std::string& s) {
	for (int i = 0; i < s.length(); ++i) {
		if (s[i] == '+') {
			int j = i - 1;
			int k = i + 1;
			std::string first = "";
			std::string second = "";
			while (j > 0 && isdigit(s[j - 1])) {
				first = s[j] + first;
				--j;
			}
			first = s[j] + first;
			while (k < s.length() && isdigit(s[k + 1])) {
				second += s[k];
				++k;
			}
			second += s[k];
			s.replace(j, k - j + 1, std::to_string(std::stoi(first) + std::stoi(second)));
		}
	}
	for (int i = 0; i < s.length(); ++i) {
		if (s[i] == '+') {
			ReplaceAmounts(s);
			break;
		}
	}
}

int main() {
	std::string str;
	getline(std::cin, str);
	ReplaceAmounts(str);
	std::cout << str << std::endl;
	system("pause");
	return 0;
}