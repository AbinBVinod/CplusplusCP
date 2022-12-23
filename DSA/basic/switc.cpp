#include<iostream>


int main(){


    int month;
    std::cout<< "enter the ur fav number between(1-12): ";
    std::cin>> month; 

    switch(month){
        case 1 :
        std::cout<< "u need a life";
        break;
        case 2:
        std::cout<< "u need to touch grass";
        break;
        case 3:
        std::cout<< "u need a duck";
        break;

        default:
        std::cout<<"only num (1-12)";
    }
}