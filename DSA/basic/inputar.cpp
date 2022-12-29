#include<iostream>

int main(){


    std::string foods[5];
    int size = sizeof(foods)/sizeof(foods[0]);
     

    for(int i = 0; i < size; i++){
        std::cout << "entyer a fod "<< i + 1  << " :";
        std::getline(std::cin, foods[i]);
       if(foods[i] == "q"){
        break;
       }
    }

    std::cout <<"you like the foll food:'\n";

    for(std::string food : foods){
        std::cout <<food <<'\n';
    }



    return 0;
}