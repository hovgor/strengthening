#include <iostream>
#include <vector>
#include <cstring>
int main()
{
    std::string name;
    std::cin >> name;
    std::string anun;
    for (int i = 0; i < name.size(); ++i)
    {
        if (name[i] != 'o' && name[i] != 'a' && name[i] != 'e' && name[i] != 'u' && name[i] != 'i')
        {
            anun.push_back(name[i]);
        }
    }
    std::cout << anun << std::endl;

    return 0;
}