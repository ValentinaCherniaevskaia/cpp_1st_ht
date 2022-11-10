#include <iostream>
#include <math.h>

float xtodec(float p, float f) {
    return p*cos(f);

}


float ytodec(float p, float f) {
    return p*sin(f);
}

int main()
{
    float x;
    float y;
    std::cout << "Enter pol coordinates: ";
    std::cin >> x >> y;
    std::cout << "Dec coordinates: " << xtodec(x, y) << " " << ytodec(x, y);
    return 0;


}
