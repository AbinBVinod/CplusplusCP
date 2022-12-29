#include<iostream>
using namespace std;


class student{
public:
         string name;
         int age;
         double gpa;
     
     student(string name, int age, double gpa){
               this->name = name;
               this->age = age;
               this->gpa = gpa;
     }

};

int main(){

   
  student student1("abin", 21, 3.2);

    cout << student1.name << endl;
    cout << student1.age << endl;
    cout << student1.gpa << endl;

}

