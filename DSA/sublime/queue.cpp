#include<bits/stdc++.h>
using namespace std;

int main(){
   

   queue<int> q;

   q.push(2);
      q.push(6);
         q.push(7);

        while(!q.empty()){
        	cout << q.front() << endl;
        	q.pop();
        }



}