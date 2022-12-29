#include<iostream>
using namespace std;


class human{
    public:
    string name;
    string pcc;
    int age;

       void eat(){
        cout << "eat";

       }


};


int main(){


human  human1;

human1.name ="ricl";
human1.pcc="nothiung";
human1.age= 21;


cout<< human1.name <<endl;
cout<< human1.pcc<<endl;
cout<< human1.age<<endl;

human1.eat();


}