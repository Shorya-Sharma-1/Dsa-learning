#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int data1, Node* next1){
        data=data1;
        next=next1;
    }

    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

Node* convertArrToLL(vector<int>arr){
     Node* head= new Node(arr[0]);
     Node* mover= head;

     for(int i=1; i<arr.size(); i++){
        Node* temp= new Node(arr[i]);
        mover->next=temp;
        mover=temp;
     }
     return head;
}


void Print(Node*head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}


 Node* removeHead(Node* head){
    if(head==NULL) return head;
    Node* temp=head;
    head=head->next;
    delete temp;
    return head;
 }

int main(){
    vector<int>arr={11,23,4,5,6};
    Node* head= convertArrToLL(arr);
    Node* temp = head;
    head=removeHead(head);
    Print(head);

}