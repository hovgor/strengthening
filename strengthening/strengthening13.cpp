#include <iostream>
#include <string>
int main()
{
    long long num;
    std::cin >> num;
    long long max = 0;
    long long min = 0;

    int num1 = num;

    while (num)
    {
        if (max < num % 10)

        {
            max = num % 10;
        }
        num = num / 10;
    }
    std::cout << "big: " << max << std::endl;
    min = num1 % 10;
    while (num1)
    {
        if (num1 % 10 < min)
        {
            min = num1 % 10;
        }
        num1 /= 10;
    }

    std::cout << "smal: " << min << std::endl;
    return 0;
}
