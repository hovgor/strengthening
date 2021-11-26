#include <iostream>
int main()
{
    float num;
    std::cout << "Write the distance in meters\n";
    std::cin >> num;
    std::cout << num / 1000 << " km\n\n\n\n\n\n";

    std::cout << "Write 'home' \n";
    std::string home = "home";
    std::string tun;
    std::cin >> tun;
    if (tun == home)
    {
        std::cout << "       ^          \n";
        std::cout << "      ''''        \n";
        std::cout << "     ''  ''       \n";
        std::cout << "    ''    ''      \n";
        std::cout << "   ''      ''     \n";
        std::cout << "  ''        ''    \n";
        std::cout << " |  ___      |    \n";
        std::cout << " | |_|_|   __|    \n";
        std::cout << " | |___|  |  |    \n";
        std::cout << " |        |* |    \n";
        std::cout << " |________|__|    \n\n\n";
    }
    else
    {
        std::cout << "       ______     \n";
        std::cout << "       |o ,o|     \n";
        std::cout << "       |_~__|     \n";
        std::cout << "     /___||___/   \n";
        std::cout << "      |   .  |    \n";
        std::cout << "      |___.__|    \n";
        std::cout << "        |  |      \n";
        std::cout << "      __|  |__    \n\n\n";
    }

    std::cout << "write '*' for 90c triangle \n";

    char star = 42;
    char star1;
    std::cin >> star1;
    if (star1 == star)
    {
        std::cout << '\t' << '\t' << '\t' << star << '\n'
                  << '\n'
                  << '\t' << '\t' << star << '\n'
                  << '\t' << star << '\t' << star << '\t' << star << std::endl;
    }
    else
    {
        std::cout << "     *      \n";
        std::cout << "    * *     \n";
        std::cout << "   *   *    \n";
        std::cout << "  *     *   \n";
        std::cout << " *       *  \n";
        std::cout << "*********** \n\n\n";
    }

    return 0;
}
