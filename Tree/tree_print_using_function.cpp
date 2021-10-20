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
    cout<<root->data<<endl;
    for(int i=0;i<root->child.size();i++){
        printtree(root->child[i]);
    }
}

int main(){
    TreeNode<int> * root = new TreeNode<int>(10);
    TreeNode<int> * node1 = new TreeNode<int>(20);
    TreeNode<int> * node2 = new TreeNode<int>(30);

    root->child.push_back(node1);
    root->child.push_back(node2);

    printtree(root);

    return 0;
}