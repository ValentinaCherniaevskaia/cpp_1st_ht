#include <iostream>

int main()
{
    using namespace std;

    int k=0; //k - копейки
    std::cout << "Enter the number of 'kopeiki': "; //ввод количества копеек
    std::cin >> k;

    if (k>= 20 && k<= 99) { //если k = от 20 до 99 

if (k%10==1) //при числе копеек от 20, где последняя цифра 1, будет "копейка"
{
   cout << k << " kopeika"; //выводится число и "копейка"
}
else if(k%10<=4 && k%10>=2) //при числе копеек от 20, где последняя цифра 2, 3 или 4, будет "копейки"
{
   cout << k << " kopeiki"; //выводится число и "копейки"
}
else if((k%10<=9 && k%10>=5) || k%10==0) //при числе копеек от 20, где последняя цифра 5-9 или 0, будет "копеек"
{
   cout << k << " kopeek"; //выводится число и "копеек"
}
    }


else if (k>=10 && k<20) //если k = от 10 до 20 
{
    cout << k << " kopeek"; //всегда будет от 10 до 20 копеек
}
    
else if (k>=1 && k<=10){ //при k от 1 до 10
if (k%10==1) //где последняя цифра 1, будет "копейка"
{
   cout << k << " kopeika"; //выводится число и "копейка"
}
else if(k%10<=4 && k%10>=2) //где последняя цифра 2-4, будет "копейки"
{
   cout << k << " kopeiki"; //выводится число и "копейки"
}
else if((k%10<=9 && k%10>=5) || k%10==0) //где последняя цифра 5-9 или 0, будет "копеек"
{
   cout << k << " kopeek"; //выводится число и "копеек"
}
}
    
    else  
    {std::cout << "Error!"<< std::endl; //ошибка, если текстом введено или если число больше 99 или меньше 1
    }
return 0;
}