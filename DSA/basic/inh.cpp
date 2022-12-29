#include<iostream>

using namespace std;

class animal{
     public:
          bool alive = true;
           void eat()
{
    cout << "eating";
}    


};

class dog : public animal{
 public:
 void bark(){
    cout<< "woooooooooooooooof";
 }

};


int main(){

 
dog dog;

cout<<dog.alive;
dog.eat();
dog.bark();
}