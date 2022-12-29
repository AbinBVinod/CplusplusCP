#include<iostream>
using namespace std;

//void walk(int steps);

int fact(int num);

int main(){


   
 cout << fact(5);



   //walk(10);

    
}

int fact(int num){
    if(num > 1){
return num  * fact(num -1);
    
    }
    else{
        return 1;
    }
}

//void walk(int steps){
    //if(steps > 0){
    
   //   cout << "steps" << endl ;
   //   walk(steps - 1);
   // }
    
//}