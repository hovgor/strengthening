#include <iostream>
void recArr(int *arr, int size);
int main()
{
    std::cout << "enter your array size: ";
    int size;
    std::cin >> size;
    if (size > 0)
    {
        int *arr = new int[size];
        for (int i = 0; i < size; ++i)
        {
            std::cin >> arr[i];
        }
        std::cout << "it's your array revers\n";
        recArr(arr, size);
        std::cout << std::endl;
        delete[] arr;
    }
    else
    {
        std::cout << "your namber is negative\n";
    }
    return 0;
}
void recArr(int *arr, int size)
{
    if (size > 0)
    {
        std::cout << arr[size - 1] << " ";
        recArr(arr, size - 1);
    }
}
