#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node*next;

    Node(int data1, Node*next1){
        data=data1;
        next=next1;
    }

    
    Node(int data1){
        data=data1;
        next=nullptr;
   }
};

Node* convertArrToLL(vector<int>arr) {
    Node* head=new Node(arr[0]);
    Node*mover=head;

    for(int i=1; i<arr.size(); i++){
        Node*temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
};

void print(Node*head){
    Node*temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
};

Node* insertInLL(Node*head, int el, int val){
    Node*temp=head;
    if(head->data==val){
        Node*x=new Node(el, head);
        return x;
    }

    while(temp){
        if(temp->next->data==val){
            Node*x=new Node(el, temp->next);
            temp->next=x;
            break;
        }
        temp=temp->next;
        
    }
    return head;
};

int main(){
    vector<int>arr={1,38,33,22,11,2,3};
    Node*head=convertArrToLL(arr);
    head=insertInLL(head,4,1);
    print(head);
}