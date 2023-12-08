// Max Element

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {23,45,56,78,658,324,56,780};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int maxi = *max_element(arr, arr+n);
    cout << maxi ;
}