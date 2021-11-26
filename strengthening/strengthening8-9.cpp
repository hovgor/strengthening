#include <iostream>
#include <string>
int main()
{

    std::string name;
    std::cin >> name;
    std::string anun;
    anun = name;

    for (int i = 0; i < name.size(); ++i)
    {
        if (name[i] >= 97 && name[i] <= 122)
        {
            name[i] -= 32;
        }
    }
    std::cout << "mecatar anun : " << name << std::endl;

    for (int i = 0; i < anun.size(); ++i)
    {
        if (anun[i] >= 97 && anun[i] <= 122)
        {
            anun[i + 1] -= 32;
        }
    }
    std::cout << "mek u mej : " << anun << std::endl;

    return 0;
}