#include <iostream>
#include <string>
void strRev(char *x);
int main()
{
    char *ch = new char;
    std::cin >> ch;
    strRev(ch);
    std::cout << std::endl;
    delete ch;

    return 0;
}
void strRev(char *x)
{
    int size = sizeof(x) / sizeof(x[0]);
    for (int i = size - 1; i >= 0; --i)
    {
        std::cout << x[i];
    }
}