#include <iostream>
void arrdelete(int *arr, int size, int delind);
int main()
{
    std::cout << "enter arr size: ";
    int size = 0;
    std::cin >> size;
    int *arr = new int[size];
    std::cout << "enter array elements \n";
    for (int i = 0; i < size; ++i)
    {
        std::cin >> arr[i];
    }
    std::cout << "enter index when delete value from array: ";
    int delind;
    std::cin >> delind;
    arrdelete(arr, size, delind);
    delete[] arr;

    return 0;
}
void arrdelete(int *arr, int size, int delind)
{
    int *arr1 = new int[size - 1];
    if (delind >= 0 && delind <= size - 1)
    {
        for (int i = 0, j = 0; i < size; ++i, ++j)
        {
            if (i == delind)
            {
                --j;
                continue;
            }
            else
            {
                arr1[j] = arr[i];
            }
        }
    }
    else
    {
        std::cout << "error\n";
    }
    std::cout << "new arr1 elements\n";
    std::cout << "{ ";
    for (int i = 0; i < size - 2; ++i)
    {
        std::cout << arr1[i] << ", ";
    }
    std::cout << arr1[size - 2] << " }" << std::endl;
    delete[] arr1;
    return;
}