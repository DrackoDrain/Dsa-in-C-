#include<bits/stdc++.h>
using namespace std;

void sum(vector<int>v){
    //  for(vector<int> :: iterator it = v.begin() ; it != v.end(); it++){
    //     cout << *(it);

    for(auto it : v){
        cout << it << endl;
    }
    
}

int main()
{
     vector<int>v;
     v.push_back(23);
     v.emplace_back(30);
     sum(v);
   
}