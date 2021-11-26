#include <iostream>
#include <string>

int main()
{

    std::string name;
    std::cin >> name;
    int a = 0;
    int size = name.length();
    char arr[size] = {0};
    for (int i = size; i > 0; i--)
    {
        arr[a] = name[i];
        std::cout << arr[a];
        a++;
    }

    return 0;
}