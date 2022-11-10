#include <iostream>

int main()
{
  using namespace std;
  
    int n=0, s=0; //n - десятичное четырехзначное число, s - сумма цифр числа n
    std::cout << "Enter the 4 digitals number = "; //строка для введения числа
    std::cin >> n;

if (n <= 1000 || n >= 9999) {
    std::cout << "Error!" << std::endl; //вывод ошибки, если число будет не 4хзначным, или оно будет введено текстом
}
else {
    while (n >= 10)
    {
        s += n % 10;
        n /= 10;
    }
    s += n; //подсчет цифр
    std::cout << s << std::endl; //вывод финального числа
}

 return 0;
}
