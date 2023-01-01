#include<bits/stdc++.h>
using namespace std;

int main(){
     map<int, string> m;
     m[1] = "abc";
     m[5] = " asdas";

     m.insert({4, " sdasd"});
     map<int, string> :: iterator it;
        for(it = m.begin(); it != m.end(); it++){
        	cout << (*it).first << " " << (*it).second << endl;
        }


}