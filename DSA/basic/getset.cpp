#include<iostream>
using namespace std;

class stove{
    public: 
               int tempreature = 0;

    int gettempreature(){
        return tempreature;
    }
    void settempreature(){
        this->tempreature = tempreature;
    }

};




int main() {

   stove stove;

   stove.tempreature = 10000;

   cout << stove.tempreature;


}