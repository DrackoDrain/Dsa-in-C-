// Check the number is present in linked list or not 


#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* temp;
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    Node (int data1){
        data = data1;
        next = nullptr;
    }
};

Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i = 0; i< arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = mover->next;  // mover = temp;
    }
    return head;

}

int checkIfPresent(Node* head, int val){
    Node* temp = head;
    while (temp){
        if(temp-> data == val){
            return 1;
        }
        else{
            temp = temp->next;
        }
    }
    return 0;
}

int main(){
    vector<int> arr = {22,4,6,90,5};
    Node* head = convertArr2LL(arr);  
    cout << checkIfPresent(head,90);
}