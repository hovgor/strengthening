#include <iostream>
int main()
{
    int numbers = 0;
    int i = 0;
    int reverse = 0;
    int total = 0;
    int mult = 1;
    std::cin >> numbers;
    while (numbers > 0)

    {
        i = numbers % 10;
        reverse = reverse * 10 + i;
        numbers = (numbers - i) / 10;
    }
    std::cout << "Reverse: " << reverse << std::endl;

    while (reverse > 0)
    {
        int iter = reverse % 10;
        std::cout << "'" << iter << "'";
        total = total + iter;
        mult = mult * iter;
        reverse = reverse / 10;
    }
    std::cout << std::endl
              << "Total: " << total
              << std::endl
              << "Multiply: " << mult
              << std::endl;
    return 0;
}