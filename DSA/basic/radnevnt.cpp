#include<iostream>
#include<ctime>

int main(){

    srand(time(0));

     int  randNum = rand() % 2 + 1;

    
     switch(randNum){
        case 1 : std::cout<< "u close";
        break;;
            
        case 2  : std:: cout << " u shehhehs";

        

     }
    
    
    
    return 0;
}