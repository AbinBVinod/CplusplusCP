#include<iostream>

int main(){

    std::string name;
    int age;


    std::cout<< "what is your age?:  ";
    std:: cin>> age; 


    std::cout<<"what is your name?:  ";
    std::getline(std::cin >>std::ws, name);

    std::cout << "hello" << name << '\n';
    std::cout << "you are"<< age << "years old";

    return 0;



}