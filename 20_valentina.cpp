#include <iostream>

int main()
{
  using namespace std;
    float a; //ввод плавающей переменной (сторона прямоугольника)
    float b;
    float c;
    float d;

    std::cout << "Enter 4 numbers: "; //ввод 4х сторон
    std::cin >> a >> b >> c >> d;

if (a>=0 && b>=0 && c>=0 && d>=0) { //условие, чтобы не было сторон меньше 0, такого не бывает
    if (((a <= c) && (b <= d)) || ((a <= d) && (b <= c))) { //условие, когда можно прямоугольник со сторонами a, b 
//поместить в прямоугольник со сторонами c, d так, чтобы стороны одного прямоугольника были параллельны сторонам другого
        std::cout << "A rectangle with sides ab CAN BE placed in a rectangle with sides cd!";
    }
    else { //в противоположном случае
        std::cout << "A rectangle with sides ab CAN NOT BE placed in a rectangle with sides cd!";
    }
} else { //если наоборот, будут введены стороны меньше 0, то выведется ошибка!
    std::cout << "Error! The sides of a rectangle can not be less than 0!";
}

 return 0;
}