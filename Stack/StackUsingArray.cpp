#include<iostream>
using namespace std;

class StacksUA{
    int * data;
    int nextIndex;
    int capacity;

    public:
        StacksUA(int totalsize){
            data = new int[totalsize];
            nextIndex = 0;
            capacity = totalsize;
        }

        int size(){
            return nextIndex;
        }
        bool isEmpty(){
            return nextIndex == 0;
        }

        void push(int element){
            if(nextIndex == capacity){
                cout<<"Stack Overflow\n";
                return;
            }
            data[nextIndex] = element;
            nextIndex++;
        }

        int pop(){
            if(isEmpty()){
                cout<<"Stack Underflow \n";
                return -1 ;
            }
            nextIndex--;
            return data[nextIndex];
        }

        int top(){
            if(isEmpty()){
                cout<<"Stack Underflow \n";
                return -1;
            }
            return data[nextIndex - 1];
        }

};

int main(){
    
    StacksUA s(5);
    cout<<s.isEmpty()<<endl;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    cout<<s.isEmpty()<<endl;

    s.pop();
    s.pop();

    cout<<s.top()<<endl;

    return 0;
}