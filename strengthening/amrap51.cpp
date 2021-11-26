#include <iostream>
#include <string>
int main()
{
    char ch[1000] = {};
    std::cin.getline(ch, 1000);
    std::string *str = new std::string[5];
    int chz = 0;
    for (int i = 0; i < 5; ++i)
    {
        if (ch[chz] == ' ')
        {
            chz += 1;
        }
        while (ch[chz] != ' ')
        {
            str[i] += ch[chz];
            ++chz;
        }
    }
    std::string bld;
    bld = str[0];
    for (int i = 0; i < 5; ++i)
    {
        if (bld.length() > str[i].length())
        {
            bld = str[i];
        }
    }
    std::cout << bld << std::endl;
    delete[] str;
    return 0;
}