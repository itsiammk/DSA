#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node * next;

        Node(int data){
            this->data = data;
            this->next = NULL;
        }

};

Node * Input(){
    int data;cin>>data;
    Node * head = NULL;
    Node * tail = NULL;
    while(data != -1){
        Node * newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = tail->next;
        }
        cin>>data;
    }
    return head;
}

void LLprint(Node * temp){
    while(temp!=NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
}


int main(){
    Node * head = Input();
    

    LLprint(head);

    cout<<"\n";
    return 0;
}