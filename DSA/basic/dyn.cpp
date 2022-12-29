#include<iostream>

int main (){
         
    //int *pNum = NULL;
   // pNum = new int ;
   // *pNum = 23;
   // std::cout <<"address: " <<pNum << '\n';
   // std::cout << "value" <<*pNum <<'\n';
    //delete pNum;

    char *pGrades = NULL;
    int size;


    std::cout<< "eenter grades hw man:";


    pGrades = new char[size];


    for(int i =0; i < size; i++){
        std::cout << "enter grade "<< i + 1 << ':';
        std::cin >> pGrades[i];


    }
    for(int i =0; i < size; i++){
        std::cout << pGrades[i] << " ";

    }

    delete[] pGrades;


          

    return 0 ;
}