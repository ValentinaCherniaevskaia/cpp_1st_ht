#include <iostream>

int main()
{
    using namespace std;

    int n=0;
    std::cout << "Enter the number: ";
    std::cin >> n;

    int m=n,x=0;
    while (m)
    {
        x=x*10+m%10;
        m/=10;
    }
    if(x==n)
        std::cout<<"This number is a palindrome!" << std::endl;
    else
        std::cout<<"This number is NOT a palindrome!" << std::endl;

    return 0;
}
