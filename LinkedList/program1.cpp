// Linked List

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    Node (int data1){
        data = data1;
        next = nullptr;
    }
};



int main(){
    vector<int> arr = {12,4,6,90,5};
    Node* y = new Node(arr[2]);
    cout << y->data<< endl;

    Node *p = new Node(50,NULL);
    cout << p->data;
}