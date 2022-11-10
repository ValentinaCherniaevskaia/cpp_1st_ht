#include <iostream>
#include <cmath>

int main()
{
  using namespace std;
  
  int a=0, b=0, s=0, c=0; //a - первый катет, b - второй катет, s - площадь прямоуг. треугольника, c - гипотенуза
    std::cout << "a (The first leg of the triangle) = "; //строка для введения значения первого катета
    std::cin >> a;

    std::cout << "b (The second leg of the triangle) = "; //строка для введения значения 2го катета
    std::cin >> b;
if (a>=0 && b>=0){
    s = (a*b)*0.5; //считается площадь по формуле с введенными данными
    std::cout << "s = " << s << std::endl; //выводится значение площади

    c = sqrt((a*a)+(b*b)); // считается длина окружности по формуле, за значение  П(пи) взято 3,14
    std::cout << "c = " << c << std::endl; //выводится значение длины окружности
} else {
      std::cout << "Error!"<< std::endl;

}

 return 0;
}
