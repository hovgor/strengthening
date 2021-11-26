#include <iostream>
#include <string>
int main()
{
    int number = 0;
    std::cout << "Pleas enter the number: ";
    std::cin >> number;
    std::cout << "This number in hexadecimal is equal 0x ";
    char numbersHex[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    int balance = 0;
    std::string str = "";

    int numberFD = number;

    while (number)
    {
        balance = number % 16;
        str = numbersHex[balance] + str;
        number = number / 16;
    }
    std::cout << str << std::endl;
    std::string strFD;
    char numberDuo[3] = {'0', '1'};
    while (numberFD)
    {
        balance = numberFD % 2;
        strFD = numberDuo[balance] + strFD;
        numberFD = numberFD / 2;
    }
    std::cout << "This number in binary 0";
    std::cout << strFD << std::endl;
    return 0;
}
