#include <iostream>

int main()
{
    using namespace std;

    int k=0, m=0, h=0; //k - секунды, m - минуты, h - часы
    std::cout << "Enter k-second: "; //ввод количества секунд, прошедших с начала суток
    std::cin >> k;
    if(k<60) //если k меньше 60 секунд, то ни одной минуты и ни одного часа не прошло
    {
        std::cout << "0 minutes and hours passed" << std::endl; //выводится результат, что прошло 0 часов и минут
    }
    else //в другом случае (если прошло больше 60 секунд) выполняется следующее:
    {
    if (k<3600 && k>=60) //если секунд меньше 3600 и больше 60
    {
        m=k/60; //минуты считаются как секунды : на 60 (в мин 60 сек)
        std::cout << "Passed " <<m<< " minute(s)" << std::endl; //вывод ответа
        std::cin >> m;
    }
    else //в противоположном случае (если секунд больше 3600) начинают считаться часы
    {
        h=k/3600; //часы считаются как кол-во сек : на 3600 (в часе 3600 сек)
        m=(k-(3600*h))/60; //минуты считаются как кол-во сек (не учитываются те, что засчитались при счете часов) : на 60 (в мин 60 сек)
        std::cout << "Passed " <<h<< " hour(s)" << std::endl; //вывод ответа
        std::cout << "Passed " <<m<< " minute(s)" << std::endl; //вывод ответа
        std::cin >> h;
        std::cin >> m;
    }
    }

    return 0;
}
