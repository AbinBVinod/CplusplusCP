/*
N <= 10^6
|S| <= 100
Q <= 10^ 6


*/

#include<bits/stdc++.h>
using namespace std;



int main(){
	  map<long long int> m;
	  int n;
	  cin >> n;
	  for(int i = 0; i <n; ++i){
	  	string s;
	  	cin >> s;
	  	m[s]++;
	  }
          int q;
          cin >> q;
          while(q--){
          	string s;
          	cin >> s;
          	cout << m[s] << endl;
          }



        
        }

}








}
    