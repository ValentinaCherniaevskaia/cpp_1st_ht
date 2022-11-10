#include <iostream>
#include <cstdlib>

int main ()
{

using namespace std;
    int c=0;

    int a=0;
    a = std::rand() % 9; //вывод рандомного числа а
    std::cout << "1st random number: " << a << endl; //пользователь вводит часло а

    int b=0;
    b = std::rand() % 9; //вывод рандомного числа b
    std::cout << "2nd random number: " << b << endl;//пользователь вводит часло b

    std::cout << "Enter your answer: "; //ввод ответа пользователя (умножение двух рандомных чисел)
    std::cin >> c;


    if (c == (a*b)) { //если ответ пользователя совпал с правильным...
        std::cout << "Correct!" << std::endl; //то вывести КОРРЕКТ
    }
    else{ //в обратном случае
        std::cout << "Not correct!" << std::endl; //вывести ИНКОРРЕКТ
    }

return 0;
}