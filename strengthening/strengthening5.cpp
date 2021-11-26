#include <iostream>
int main()
{
    int num1 = 0;
    int num2 = 0;
    char action[2];
    std::cin >> num1 >> action >> num2;
    if (action[2] = 42)
    {
        std::cout << num1 * num2 << std::endl;
    }
    else if (action[2] = 43)
    {
        std::cout << num1 + num2 << std::endl;
    }
    else if (action[2] = 45)
    {
        std::cout << num1 - num2 << std::endl;
    }
    else if (action[2] = 47)
    {
        std::cout << num1 / num2 << std::endl;
    }

    return 0;
}