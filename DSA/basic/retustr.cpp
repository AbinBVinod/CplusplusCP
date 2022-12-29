#include <iostream>

std::string conString(std::string string1, std::string string2);

int main()
{

    std::string firstname = " abin";
    std::string lastname = "vinod";
    std::string fullname = conString(firstname, lastname);

    std::cout << "hello  " << fullname;
    return 0;
}
std::string conString(std::string string1, std::string string2)
{
    return string1 + " " + string2;
}