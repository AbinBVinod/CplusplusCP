#include<bits/stdc++.h>
using namespace std;

void print (set<string> &s){
       for(string value : s){
       	cout << value << endl;
       }
       //for(auto it = s.begin(); it != s.end(); ++it){
      // 	cout << (*it) << endl;
       //}
}

int main(){
      set<string> s;
      s.insert("abis");
      s.insert("ghgg");
      s.insert("eddf");
      auto it = s.find("abis");
       if(it != s.end()){
       	cout << (*it);
       }

       //print(s);




}