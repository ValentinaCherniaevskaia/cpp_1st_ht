#include <iostream>
#include <cmath> //для квадрата

int main()
{

using namespace std;

	float a=0, b=0, c=0;
	std::cout << "Lenght of the side of a triangle №1: "; //ввод длины стороны 1
	std::cin >> a;
	std::cout << "Lenght of the side of a triangle №2: "; //ввод длины стороны 2
	std::cin >> b;
	std::cout << "Lenght of the side of a triangle №3: "; //ввод длины стороны 3
	std::cin >> c;

if (a>=0 && b>=0 && c>=0){ //условие, что длины сторон больше или равны 0
	float ma = 0.5 * (sqrt(2 * b * b + 2 * c * c - a * a)); //подсчет первой медианы по формуле
	std::cout << "Median a = " << ma << std::endl;
	float mb = 0.5 * (sqrt(2 * a * a + 2 * c * c - b * b)); //подсчет второй медианы по формуле
	std::cout << "Median b = " << mb << std::endl;
	float mc = 0.5 * (sqrt(2 * a * a + 2 * b * b - c * c)); //подсчет 3й медианы по формуле
	std::cout << "Median c = " << mc << std::endl;
} else {
    std::cout << "Error! Lenght of the side of a triangle can not be less than 0! "; //ошибка, если длина стороны меньше 0
}
return 0;
}