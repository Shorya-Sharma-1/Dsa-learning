#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* back;

    Node(int data1, Node* next1, Node* back1){
        data=data1;
        next=next1;
        back=back1;
    }

    Node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
    }   
};

Node* convertArr2DLL(vector<int>&arr){
    Node* head= new Node(arr[0]);
    Node* prev = head;

    for(int i=1; i<arr.size(); i++){
        Node* temp = new Node(arr[i], nullptr, prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
};

void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
};

Node* deleteTail(Node*head){
    Node*temp=head;

    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* newTail=temp->back;
    newTail->next=nullptr;
    temp->back=nullptr;
    return head;
}

int main(){
    vector<int>arr = {1,2,3,4,5,6,7};
    Node* head= convertArr2DLL(arr);
    head= deleteTail(head);
    print(head); 
    return 0;
}