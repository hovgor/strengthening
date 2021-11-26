#include <iostream>
int main()
{
    double arr[10] = {0};
    const int size = 9;
    for (int i = 0; i <= size; ++i)
    {
        std::cin >> arr[i];
    }
    double max = arr[0];
    int max_index = 0;
    for (int i = 1; i <= size; ++i)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            max_index = i;
        }
    }
    int min_index = 0;
    double min = arr[0];
    for (int i = 0; i <= size; ++i)
    {
        if (min > arr[i])
        {
            min = arr[i];
            min_index = i;
        }
    }
    std::cout << "max index: " << max_index << std::endl;
    std::cout << "min index: " << min_index << std::endl;	
    std::cout<< "max value + min value"<< max + min <<std::endl;	
    return 0;
}
