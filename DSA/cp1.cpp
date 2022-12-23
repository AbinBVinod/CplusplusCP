#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >>n >>m;
    while(m--){
        int a, b, d ;
        cin >> a >> b >>d ;
        for(int i = 1; i <= b; ++i){
            ar[i] += d;

        }
    }

    long long mx = -1;
      for (int  i = 1; i < n; i++){
        if(mx < ar[i]){
            mx = ar[i];

        }
      }
      cout << mx  <<endl;

      
    
}