#include <iostream>

int main()
{

    std::string name = "abin";
    int age = 21;

    std::string *pName = &name;
    int *pAge = &age;

    std::cout << *pName;

    std::cout << *pAge;

    return 0;
}