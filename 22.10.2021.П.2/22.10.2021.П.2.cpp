//Уронить программу переполнением стека
#include <iostream>

int foo(int i) {
	return foo(i + 1);
	return foo(i - 1);
}

int main() {
	foo(0);
}
