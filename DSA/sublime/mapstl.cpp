#include<bits/stdc++.h>
using namespace std;

void print(map<int,string> &m){
	cout << m.size() << endl;
	 for(auto &pr : m ){
           cout << pr.first << " " << pr.second<< endl;
        }
}


int main(){
     map<int, string> m;
     //m[1] = "abc";
    // m[5] = " asdas";     // 0(log(n))

      


    // m.insert({4, " sdasd"});
    // map<int, string> :: iterator it;
      //  for(it = m.begin(); it != m.end(); it++){
       // 	cout << (*it).first << " " << (*it).second << endl;
        //}
        m["abinwithbig"] = "god";
         auto it = m.find(5);  // 0 log(n)
        // m.erase(1); // log(n) n
        if(it == m.end()){
         //	cout << "no vlaue";
           //m.clear();
        // }else {
         //	cout << it->first << " " << it->second << endl;
        // }
        print(m);
 
}