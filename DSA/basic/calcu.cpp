#include<iostream>

int main(){

     char op;
     double num1;
     double num2;
     double result;


     std::cout << "***cal***\n";
      std:: cout << "enter only + - * /:  ";
      std:: cin >>op;

      std::cout<< "enter #1: ";
      std::cin>> num1;
       std::cout<< "enter #2: ";
      std::cin>> num2;

      switch(op){
          case '+':
          result = num1 + num2;
          std:: cout<< "result:  "<< result << '\n';
          break;

          case '-':
          result = num1 -num2;
          std:: cout<< "reult: " << result <<'\n';
          break;
       default : 
       std::cout<< "enter prop num";


      }

         

         std::cout << "****";

    return 0;
}