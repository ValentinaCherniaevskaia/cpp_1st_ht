#include <iostream>
#include <math.h> //для корня

float pToPOl(float x, float y){ //p -полярный радиус, (p,f) - координаты в полярной системе кординат
    return sqrt(x * x + y * y);

}


float fToPol(float x, float y) { //f - полярный угол в радианах
    return atan(y / x);
}

int main()
{
    float x;
    float y;
    std::cout << "Enter dec coordinates: ";
    std::cin >> x >> y;
    std::cout<<"Pol coordinates: "<<pToPOl(x, y)<<" "<<fToPol(x,y);
    return 0;
}
