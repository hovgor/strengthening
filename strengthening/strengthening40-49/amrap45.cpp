#include <iostream>
int main()
{
    std::cout << "fibonachi enter number: ";
    int number;
    std::cin >> number;
    int a = 0;
    int b = 1;
    int j = 2;
    for (int i = 0; i <= number; ++i)
    {
        if (number == j)
        {
            std::cout << b << std::endl;
            break;
        }
        if (number == j - 1)
        {
            std::cout << a << std::endl;
            break;
        }
        a = a + b;
        b = a + b;
        j = j + 2;
    }
    return 0;
}
