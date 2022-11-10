#include <iostream>

int main()
{
    using namespace std;

    int d=0, l=0; //d - день недели, l - продолжительность переговоров
    std::cout << "Cost of the meeting is X\n"; //данные о стоимости переговоров
    std::cout << "Lenght of the meeting: "; //данные о продолжительности переговоров
    std::cin >> l;
    std::cout << "Day of the meeting: "; //ввод данных о дне недели
    std::cin >> d;
 if (d>=1 && d<=7 && l>0){ //если день больше 1 или меньше 7, цена больше или равна 0 и продолжительность переговоров дольше 0
    if (d>=1 && d<=5){ //если будни дни, то все работает как обычно, цена 100%
    std::cout << "The final cost of the meeting: "<< l << "X" << std::endl; //вывод финальной стоимости
    }

double c=0;
    if (d == 6 || d == 7) { //если сб или вс
        c = l*0.8; //цена умножается на 0.8 из-за скидки 20%
    std::cout << "The final cost of the meeting: "<< c << "X" << std::endl; //вывод финальной стоимости
    }
 }

 else {
    std::cout << "Error!" << std::endl; //ошибка, если не тот день недели, если цена отриц. или если длительность меньше, чем 0
 }
    return 0;
}
