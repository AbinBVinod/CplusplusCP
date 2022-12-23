#include<iostream>

int main(){

    
     double temp;
     char unit;


    std::cout<< "temp conv \n";
    std::cout<< "f= fah \n";
    std::cout<< "c = cel \n";
    std::cout << "what uint to oonvert: ";
    std::cin >> unit;

    if(unit =='f' || unit =='F'){
        std::cout<< "enter the temerature in cel: ";
        std::cin >> temp;

        temp=(1.8 * temp)+32.0;
        std::cout <<"temp is :  "<< temp << "f\n";

    }
    else if(unit == 'c' ||  unit == 'C'){
        std::cout<<"enter the temp in fah : ";
        std::cin>> temp;

        temp = (temp - 32) / 1.8;
        std::cout <<"temp is :  "<< temp << "c\n";

    }
    else{
        std::cout<< "enter in f/n";
    }



    return 0;
}