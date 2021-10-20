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

void printtree(TreeNode<int>* root){
    cout<<root->data<<" : ";
    for(int i=0;i<root->child.size();i++){
        cout<<root->child[i]->data;
        if(i+1 == root->child.size()){
            cout<<".";
        }
        else{
            cout<<" , ";
        }
    }
    cout<<endl;
    for(int i=0;i<root->child.size();i++){
        printtree(root->child[i]);
    }
}

int main(){
    TreeNode<int> * root = new TreeNode<int>(10);
    TreeNode<int> * node1 = new TreeNode<int>(20);
    TreeNode<int> * node2 = new TreeNode<int>(30);
    TreeNode<int> * node3 = new TreeNode<int>(40);
    TreeNode<int> * node4 = new TreeNode<int>(50);

    root->child.push_back(node1);
    root->child.push_back(node2);
    node1->child.push_back(node3);
    node2->child.push_back(node4);


    printtree(root);

    return 0;
}