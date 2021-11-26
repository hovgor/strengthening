#include <iostream>
int fib(int key, int a, int b, int i);
int main()
{
    int num = 0;
    std::cout << "plese input number which is above 0: ";
    std::cin >> num;
    std::cout << fib(num, 0, 1, 2) << std::endl;
    return 0;
}
int fib(int key, int a, int b, int i)
{

    if (i == key)
    {
        return b;
    }
    if (i - 1 == key)
    {
        return a;
    }
    a = a + b;
    b = b + a;
    i += 2;
    fib(key, a, b, i);
}

