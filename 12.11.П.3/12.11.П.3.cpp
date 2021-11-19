/*
Функция, которая принимает ссылку на int и сдвигает на одну позицию каждый его байт.
*/
#include <iostream>

/*
void Reader(int& a) {
    char byte = 1;
    char *p = &byte;
    for (int i = 0; i < 4; ++i) {

    }
}
*/

int main()
{
    int num;
    std::cout << "Input number:\n";
    std::cin >> num;
    std::cout << &num << std::endl;
    char byte = 0;
    std::cout << &byte << std::endl;
    std::cout << &byte + 1 << std::endl;
}