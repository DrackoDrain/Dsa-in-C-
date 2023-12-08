// Traversal of Linked list 

// Linked List

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* head;
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    Node (int data1){
        data = data1;
        next = nullptr;
    }
};

void traversal(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i = 0; i< arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = mover->next;  // mover = temp;
    }
   Node* temp = head;
     while(temp !=  NULL) {

          cout<<temp->data<<" ";
          temp = temp->next;
        }

}

int main(){
    vector<int> arr = {12,4,6,90,5};
    traversal(arr);
}