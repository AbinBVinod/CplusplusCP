#include<iostream>

int main(){

    
    int num;
  do {
        std::cout<< "enter a + num: ";
        std::cin >> num;
    } while(num < 0);

    std::cout << "the num :" << num;
    
    
    
    return 0;
}