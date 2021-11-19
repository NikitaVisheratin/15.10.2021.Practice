#include <iostream>
#include <string>

void AllowWords(char* A, int& K) {
	int counter = 0;
	std::string str;
	char* word = new char[K];
	AddLetter(word, K)
}

void AddLetter(char* word, int& K) {
	
}

int main() {
	int i = 0;
	char ch;
	char Alphabet[100];
	char vowels[5] = { 'A', 'E', 'I', 'O', 'U' };
	while (std::cin >> ch, !isdigit(ch)) {
		Alphabet[i] = ch;
		i += 1;
	}
	char* A = new char[i];
	for (int j = 0; j < i; ++j) {
		A[j] = Alphabet[j];
	}
	int K = ch - '0';
	std::cout << K;
	AllowWords(K);
	delete[] A;
	return 0;
}