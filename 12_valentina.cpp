#include <iostream>

int main()
{
  using namespace std;
    int h=0, w=0; //h-рост, w-вес
    std::cout << "Your height (centimeters): "; //ввод роста
    std::cin >> h;
    std::cout << "Your weight (centimeters): "; //ввод веса
    std::cin >> w;
    const int opt_w = h - 100;
    if (opt_w > w) { //если оптимальный вес больше, чем реальный...
        std::cout << "It is better for you to eat more" << std::endl; //то программа выдает рекомендацию есть больше (то есть поправиться)
    } else if (opt_w < w) { //если оптимальный вес меньше, чем реальный...
        std::cout << "It is better for you to go on a diet..." << std::endl; //то программа выдает рекомендацию сесть на диету (то есть похудеть)
    } else {
        std::cout << "You have an optimal weight!" << std::endl; //если оптимальный вес совпадает с реальным, то выдается фраза "You have an optimal weight!
    }
 return 0;
}
