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

int SearchLL(Node * head , int data){
    int count = 0;
    while(head != NULL ){
        if(head->data == data){
            return count;
            break;
        }
        else{
            head = head->next;
            if(head->next == NULL){
                return -1;
            }
            count++;
        }
    }
}

int main(){
    Node * head = Input();
    cout<<"Enter number you want to search in LL : ";
    int aa;cin>>aa;
    int r = SearchLL(head, aa);
    cout<<r<<"\n";
    // LLprint(head);



    cout<<"\n";
    return 0;
}