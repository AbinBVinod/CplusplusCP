#include<bits/stdc++.h>
using namespace std;

void pvect(vector<int> v){
	cout << "size: " << v.size() << endl;
	for(int i =0; i < v.size(); i++){       //0(1)
		cout << v[i] << " ";

	}
	cout<< endl;
}


int main(){


vector<int> v();
v.push_back(2);
v.push_back(7);
pvect(v);
//v.pop_back();
//pvect(v);

vector<int> v2 = v;   //o(n)
v2.push_back(5);
pvect(v2);




}

//int a[11];
//vector<int> v;
//int n;
//cin >> n;
//for(int i = 0; i < n; i++){
    // int x;
    // cin >> x;
    // pvect(v);
     //v.push_back(x);  //0(1)

//pvect(v);







