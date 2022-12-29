#include<iostream>
#include<ctime>
int main(){


    int num;
    int guess;
    int tries;


    srand(time(NULL));
    num = rand() % 100 + 1;

    std::cout<< "guess num\n";

    do{
        std::cout << " enter a guess btw (1-100)";
        std::cin >> guess;
        tries++;

          if(guess > num){
           std::cout << "to high";

          }
          else if (guess < num){
            std::cout <<"to low";
          }
          else {
            std::cout <<"correct  of tires" << tries << '\n';
          }


    }while(guess != num);

}