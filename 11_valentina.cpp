#include <iostream>

int main()
{
  using namespace std;
    int s=0;
    double r=0; //объявляем переменную с плавающей точкой
 
    std::cout << "Enter the purchase amount: "; //ввод цену за товары
    std::cin >> s;
 
    if (s > 1000) //условие, что скидка только от 1000р
    {
        r = s - (s * 0.10) ; //рассчет скидки
        std::cout <<  "Amount with 10 percent discount: " <<  r; //вывод цены со скидкой
    }

    else
    {
        std::cout << "Sorry! There are not any discounts on the purchases that cost less than 1000..."; //вывод того, что невозможно получить скидку
    }
 return 0;
}
