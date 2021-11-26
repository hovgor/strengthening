#include <iostream>
#include <string>
class Student
{
public:
    void mutqagrum()
    {
        std::cout << "Enter student's name: ";
        std::cin >> name;
        std::cin.get();
        std::cout << "Enter " << name << "'s surname: ";
        getline(std::cin, surname);
        std::cout << "Enter " << name << ' ' << surname << "'s age: ";
        std::cin >> old;
    }

private:
    short old;
    std::string name;
    std::string surname;
};
int main()
{
    std::cout << "how meny students do you have? ";
    int size;
    std::cin >> size;
    Student *politexnik = new Student[size];
    for (int i = 0; i < size; ++i)
    {
        politexnik[i].mutqagrum();
    }

    delete[] politexnik;
    politexnik = nullptr;
    return 0;
}