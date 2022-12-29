#include<iostream>

using namespace std;

struct student{
    string name;
      double gpa;
      bool enrolled;

};

int main(){

student  student1;
student1.name ="abin";
student1.gpa =4.2;
student1.enrolled = true;


cout <<student1.name << endl;
cout <<student1.gpa << endl;
cout <<student1.enrolled << endl;


}