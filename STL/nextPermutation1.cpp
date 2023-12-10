#include<iostream>
#include<algorithm>
#include<utility>
using namespace std;
int main()
{
    string s = "1234";
    int i =0;
    sort(s.begin(),s.end());
    do{
        i++;
        // cout << s << endl; 
    }while(next_permutation(s.begin(), s.end()));

    cout << i << endl;
}