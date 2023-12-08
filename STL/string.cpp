#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1 = "aryan";

    string s2 = "ARYAN";

    transform(s1.begin(), s1.end(), s1.begin(), :: toupper);
    cout<<s1 << endl;

    transform(s2.begin(), s2.end(), s2.begin(), :: tolower);
    cout << s2 << endl;
    
}