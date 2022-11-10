#include <iostream>

int main()
{
  using namespace std;
   
int a=0,b=0,c=0; //ввод переменных (длина сторон)
    std::cout << "Enter the 1st side of the triangle: "; //длина первой стороны
    std::cin >> a;
    std::cout << "Enter the 2nd side of the triangle: "; //длина 2й стороны
    std::cin >> b;
    std::cout << "Enter the 3rd side of the triangle: "; //длина 3й стороны
    std::cin >> c;

    if (a==b||b==c||a==c) //сравнение сторон и условие их равенства
    {
        std::cout << "Right triangle" << std::endl; //если условие соблюдается, то треугольник равнобедренный
    }
    else {
        std::cout << "Triangle is not right" << std::endl; //если условие не соблюдается, то треугольник не равнобедренный
    }
 return 0;
}
