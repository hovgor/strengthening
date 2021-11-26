#include <iostream>
int numleng(long number, short numberl, short lengn);
int main()
{
    std::cout << "enter number:  ";
    long number;
    std::cin >> number;
    std::cout << "enter length for nambers:  ";
    short numberl;
    std::cin >> numberl;
    short lengn = 0;
    long number1 = number;
    while (number1)
    {
        number1 /= 10;
        ++lengn;
    }
    if (lengn >= numberl)
    {
        std::cout << numleng(number, numberl, lengn) << std::endl;
    }
    else
    {
        std::cout << "your number length is been long !!! \n";
    }

    return 0;
}
int numleng(long number, short numberl, short lengn)
{
    int numberik = lengn - numberl;
    for (int i = 0; i < numberik; ++i)
    {
        number /= 10;
    }
    return number;
}