#include <iostream>

int main()
{
  using namespace std;

int n=0, d=0;
    std::cout << "Enter the three-digit number= "; //строка для введения 3-хзначного числа
    std::cin >> n;

//19.1
    std::cout << "Enter one more (not only three-digit) number d= "; //строка для введения числа
    std::cin >> d;

    if (n >= 100 && n <= 999) { //если число от 100 до 999 (условие, когда число 3-хзначное)
int a=0, b=0, c=0; //a-c - буквы, обозначающие цифры числа
    
    a=n/100; //первая цифрв числа
    n-=n/100*100;
    b=n/10; //вторая
    n-=n/10*10;
    c=n; //третья

int s=0;
    s = (a*b*c); //подсчет произведения цифр
    std::cout << "The product of a 3 digits is " << s << std::endl;
if (s > d){ //если произведение больше
    std::cout << "The PRODUCT of the digits of a three-digit number is GREATER than the number!" << std::endl; //то выводится фраза "произведения цифр 3хзначного числа больше, чем второе число d"
} else if (s < d){ //если d больше
    std::cout << "The NUMBER is GREATER than the product of the digits of a three-digit number!" << std::endl; //то выводится фраза "число больше, чем произведение цифр"
} else if (s == d) //если знчаения равны
    std::cout << "The number is EQUAL to the product of the digits of a three-digit number!" << std::endl; //то выводится фраза о том, что они равны

int m=0;
    m = (a+b+c); //подсчет суммы цифр
    std::cout << "The sum of a 3 digits is " << m << std::endl;
if (m % 7==0) //условие, что если число может делиться на 7 без остатка(чтобы оставалось 0)
    std::cout << "The sum of the digits of a three-digit number IS a multiple of 7!" << std::endl;
else
    std::cout << "The sum of the digits of a three-digit number IS NOT a multiple of 7!" << std::endl;

} else {
    std::cout << "Error! The three-digit number should have 3 digits!" << std::endl; //вывод ошибки, если число будет не 4хзначным, или оно будет введено текстом
}

 return 0;

}
