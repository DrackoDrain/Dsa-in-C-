#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {23,34,456,75,8};

    int n = sizeof(arr)/sizeof(arr[0]);

    bool res = binary_search(arr, arr+n, 34);
    cout << res << endl;

}