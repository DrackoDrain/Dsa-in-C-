#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {23,34,456,75,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    sort(arr+2,arr+4); 
   
    for (int i= 0; i< 5; i++){
        cout << arr[i] <<" ";
     }
   

}