#include <iostream>
#include <string>
int main()
{
    double arr[10] = {0.0};
    const int size = 9;
    for (int i = 0; i <= size; ++i)
    {
        std::cin >> arr[i];
    }
    std::cout << "hakarak hertakanutyun\n";
    for (int i = size; i >= 0; --i)
    {
        std::cout << arr[i] << std::endl;
    }
    std::cout << "mec@ esqni mijic\n";

    int i = 0;
    int max = 0;
    double max_index = arr[0];
    for (; i <= size; ++i)
    {
        if (arr[i] > max_index)
        {
            max_index = arr[i];
            max = i;
        }
    }
    std::cout << arr[max] << std::endl;
    std::cout << "mec indexovnel \n";
    std::cout << max << std::endl;

    return 0;
}