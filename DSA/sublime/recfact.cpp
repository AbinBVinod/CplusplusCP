#include<bits/stdc++.h>
using namespace std;

int fact(int n){
	if(n ==0 ) return 1;
	return fact(n-1) * n;
}


int main(){
#ifndef ONLINE_JUDGE
 
    freopen("input.txt", "r", stdin);
 
    freopen("output.txt", "w", stdout);
   
#endif
  

int n;
 cin >> n;

 cout << fact(n);




}
 

 // o(n)