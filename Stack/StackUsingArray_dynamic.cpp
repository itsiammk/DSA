#include<iostream>
using namespace std;

class StacksUA{
    int * data;
    int nextIndex;
    int capacity;

    public:
        StacksUA(){
            data = new int[4];
            nextIndex = 0;
            capacity = 4 ;
        }

        int size(){
            return nextIndex;
        }
        bool isEmpty(){
            return nextIndex == 0;
        }

        void push(int element){
            if(nextIndex == capacity){
                int *nData = new int[2*capacity];
                for(int i=0;i<capacity;i++){
                    nData[i]=data[i];
                }
                capacity *= 2;
                delete [] data;
                data = nData;
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
    
    StacksUA s;
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