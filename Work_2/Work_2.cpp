#include <iostream>

int main()
{
	int a;
	char b;
	bool c;
	short d;
	long e;
	float f;
	double g;
	int h[] = { 1, 2, 3, 4, 5 };
	std::cout << &a << " " << sizeof(a) << std::endl;
	std::cout << &b << " " << sizeof(b) << std::endl;
	std::cout << &c << " " << sizeof(c) << std::endl;
	std::cout << &d << " " << sizeof(d) << std::endl;
	std::cout << &e << " " << sizeof(e) << std::endl;
	std::cout << &f << " " << sizeof(f) << std::endl;
	std::cout << &g << " " << sizeof(g) << std::endl;
	std::cout << &h << " " << sizeof(h) << std::endl;
}