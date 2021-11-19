/*
Написать фунцию, выводящую "Hello world! I was born!!!" в первый раз, 
затем N раз выводит строчку "I'm alive", 
все остальные обращения выводят "Bye, bye, dear, I'm already asleep...".
*/
#include <iostream>

static int N; //глобальная переменная N, которая определяет количество повторений второй строчки.

void Printer() { 
    static int num = 1;
    if (num == 1) {
        std::cout << "Hello world! I was born!!!" << std::endl;
    }
    else if (num <= N + 1) {
        std::cout << "I'm alive" << std::endl;
    }
    else {
        std::cout << "Bye, bye, dear, I'm already asleep..." << std::endl;
    }
    ++num;
}


int main()
{
    int number_of_calls = 0;
    std::cout << "Input N:\n";
    std::cin >> N;
    std::cout << "Input the number of function calls:\n";
    std::cin >> number_of_calls;

    for (int i = 0; i < number_of_calls; ++i) {
        Printer();
    }
    
}