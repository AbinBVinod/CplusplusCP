#include<iostream>

double square(double legnth);
int main(){
 
     double length = 4.0;
     double area = square(length);

     std::cout << "area" << area << "cm^2";
 return 0;
 double square(double length){
    return legnth * length ;
 }
}