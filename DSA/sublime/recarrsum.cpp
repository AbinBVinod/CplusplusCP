#include<bits/stdc++.h>
using namespace std;

int sum(int n ,int a[]){
	if( n < 0) return 0;
	return sum(n-1, a) + a[n];
}



int main(){
#ifndef inputoutput
 
    freopen("input.txt", "r", stdin);
 
    freopen("output.txt", "w", stdout);
 #endif

int n; 
cin >> n;
int a[n];
for(int i = 0; i < n; ++i){
	cin >> a[i];
}
cout << sum(n-1, a);


}