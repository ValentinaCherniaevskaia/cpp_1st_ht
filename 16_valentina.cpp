#include <iostream>

int main()
{
  using namespace std;

int n=0, m=0;
    std::cout << "Enter the number: "; //вводится 6-изначное число
    std::cin >> n;
    m=n;
    
    if (n>=100000 && n<=999999) { //если число от 100000 до 999999 (условие, когда число 6-изначное)
int a=0, b=0, c=0, d=0, e=0, f=0; //a-f - буквы, обозначающие цифры числа
    a=n/100000; //первая цифра
    n-=n/100000*100000;
    b=n/10000;
    n-=n/10000*10000;
    c=n/1000;
    n-=n/1000*1000;
    d=n/100;
    n-=n/100*100;
    e=n/10;
    n-=n/10*10;
    f=n;
    
    if ((a+b+c)-(d+e+f)==0) //если разница между первыми 3я цифрами и последними равна 0
        std::cout << "Lucky number!"; //выводится "счастливое число!"

    else if ((a+b+c)-(d+e+f)!=0) //если разница между первыми 3я цифрами и последними не равна 0
        std::cout << "Not lucky number!"; //выводится "не счастливое число!"
    }

    else { //если число введено текстом или оно не 6-изначное, то выводится Error!
        std::cout << "Error! The number cannot contain more or less than 6 characters";
    }

return 0;
}