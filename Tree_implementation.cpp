#include<bits/stdc++.h>
using namespace std;

template <typename T>
class TreeNode{
    public:

    T data;
    vector<TreeNode<T>*> child;
    
    TreeNode(T data){
        this->data = data;
    }
};

int main(){
    TreeNode<int> * root = new TreeNode<int>(10);
    TreeNode<int> * node1 = new TreeNode<int>(20);
    TreeNode<int> * node2 = new TreeNode<int>(30);

    root->child.push_back(node1);
    root->child.push_back(node2);

    cout<<"Root is "<<root->data<<endl;
    cout<<"Childrens are : \n";
    cout<<root->child[0]->data<<endl;
    cout<<root->child[1]->data<<endl;
    cout<<"Total childrens are : ";
    cout<<root->child.size()<<endl;

    

    return 0;
}