#include<bits/stdc++.h>
using namespace std;

void printvec(vector<pair<int , int>> v){

    for (auto it : v){
        cout << it.first << endl;
    }
 
}

int main (){
    
   vector<pair<int, int>> v;

   v.emplace_back(50,60);
   printvec(v);
 

}