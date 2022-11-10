#include <iostream>

int main()
{
  using namespace std;
  
  int b1=0,b2=0,h=0,s=0;
    std::cout << "b1 (The first base of a trapezoid) = "; //строка для введения значения основания
    std::cin >> b1;

    std::cout << "b2 (The second base of a trapezoid) = "; //строка для введения значения основания
    std::cin >> b2;

    std::cout << "h (Trapezoid height) = "; //строка для введения значения высоты
    std::cin >> h;

if (b1 <= 0)
    std::cout << "Error, base of trapezoid can not be 0 or less than 0, or a text!" << std::endl; //вывод ошибки, если значение будет равно 0 или меньше, или оно будет введено текстом
else

if (b2 <= 0)
    std::cout << "Error, base of trapezoid can not be 0 or less than 0, or a text!" << std::endl; //вывод ошибки, если значение будет равно 0 или меньше, или оно будет введено текстом
else

if (h <= 0)
    std::cout << "Error, trapezoid height can not be 0 or less than 0, or a text!" << std::endl; //вывод ошибки, если значение будет равно 0 или меньше, или оно будет введено текстом
else

    s = ((b1 + b2)*0.5)*h; //считается площадь по формуле с введенными данными
    std::cout << "s = " << s << std::endl; //выводится значение площади

 return 0;
}
