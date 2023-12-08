#include<bits/stdc++.h>
using namespace std;

void explainQueue(){
    queue<int>q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout << q.front();  // print the first element
    cout << endl;
    cout << q.back()<< endl; // prints the back element 

    q.pop(); // delete front element of queue
    cout << q.front()<< endl;

    q.back() += 5;
    cout << q.back() << endl;
 
}

int main()
{
    explainQueue();

}