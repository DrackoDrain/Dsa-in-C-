// Setbits of a number 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    // int num = 7;

    // int cnt = __builtin_popcount(num);

    // cout << cnt;                                                                 


    long long num = 7484847494;
    int cnt = __builtin_popcountll(num); // it counts setbits

    cout << cnt;

}