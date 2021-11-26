#include <iostream>
#include <string>

int main()
{
    const int size = 1;
    std::string names[size];
    int ags[size] = {0};
    std::string university[size];
    double avgs[size] = {0.0};
    std::string codeR = "codeRepublic";
    for (int i = 0; i < size; ++i)
    {
        std::cout << "Напишитье имя\n";
        std::cin >> names[i];
        std::cout << "Напишите возраст\n";
        std::cin >> ags[i];
        std::cout << "В каком университете вы учитесь?\n";
        std::cin >> university[i];
        std::cout << "Как вы оценываьте ваш IQ?\n";
        std::cin >> avgs[i];
    }
    if (names[size] == codeR)
    {
        std::cout << "молодец поцанчик , респект за код рипаблик\n";
    }
    else
    {
        std::cout << "нафиг нужен такой университет приходи к нам в codeRepublic\n\n\n\n";
    }

    for (int i = 0; i < size; ++i)
    {
        std::cout << "Напишитье имя вашего друга\n";
        std::cin >> names[i];
        std::cout << "Напишите возраст\n";
        std::cin >> ags[i];
        std::cout << "В каком университете он учится?\n";
        std::cin >> university[i];
        std::cout << "Как вы оценываьте его IQ?\n";
        std::cin >> avgs[i];
    }

    return 0;
}