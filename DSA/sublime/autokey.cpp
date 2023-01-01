#include<bits/stdc++.h>
using namespace std;

int main(){
  // vector<int> v = {4, 7, 8, 4};
  // for(int i = 0; i < v.size(); i++){
   //	cout << v[i];
  // }
   //cout << endl;
   //vector<int> :: iterator it;
   //for( auto it = v.begin(); it != v.begin(); it++){
   	//cout << (*it) << " ";

  vector <pair<int,int>> v_p = {{3,4},{7,8}};
   for(auto &value : v_p){
   	cout << value.first << " " << value.second ;
   }
     auto a = 1;
   cout << a <<endl;

}