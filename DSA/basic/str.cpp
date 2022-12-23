#include<iostream>

int main(){

    
    std::string name;

    std::cout << "enter your name: ";
    std::getline(std::cin, name);

    //if(name.length() > 12){
        std::cout << "your name is not valid ";

    }
    else{ 
        std::cout << "welcome " << name;
    //}
    
    if(name.empty()){
        std::cout<< "your namesadlasd"

    }
    else{
        std::cout << "he;;"
    }
    
    return 0;
}