#include <iostream>

int main()
{
  using namespace std;

int m=0; //m (mounth) - номер месяца
   
    std::cout << "The number of the month: "; //ввод номера месяца с клавиатуры
    std::cin >> m;

    if (m == 1)
        std::cout << "January" << std::endl; //если вводится 1, то январь
    else if (m == 2)
        std::cout << "February" << std::endl; //если вводится 2, то фев
    else if (m == 3)
        std::cout << "March" << std::endl; //если вводится 3, то март
    else if (m == 4)
        std::cout << "April" << std::endl; //если вводится 4, то апр
    else if (m == 5)
        std::cout << "May" << std::endl; //если вводится 5, то май
    else if (m == 6)
        std::cout << "June" << std::endl; //если вводится 6, то июнь
    else if (m == 7)
        std::cout << "July" << std::endl; //если вводится 7, то июль
    else if (m == 8)
        std::cout << "August" << std::endl; //если вводится 8, то авг
    else if (m == 9)
        std::cout << "September" << std::endl; //если вводится 9, то сен
    else if (m == 10)
        std::cout << "October" << std::endl; //если вводится 10, то окт
    else if (m == 11)
        std::cout << "November" << std::endl; //если вводится 11, то ноя
    else if (m == 12)
        std::cout << "December" << std::endl; //если вводится 12, то дек

    if (m == 1 ||  m == 2 || m == 12) //если введено 1, 2 или 12, то это зима
        std::cout << "Winter" << std::endl; //выводится зима

    else if (m > 2 && m < 6) //если введено число больше 2 и меньше 6, то весна
        std::cout << "Spring" << std::endl; //выводится весна

    else if (m > 5 && m < 9) // - - | - -
        std::cout << "Summer" << std::endl; // - - | - -

    else if (m > 8 && m < 12) // - - | - -
        std::cout << "Autumn" << std::endl; // - - | - -
    else
        cout << "The data is wrong!" << endl; //если число введено неверно, то выводится ошибка

 return 0;
}
