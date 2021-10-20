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

TreeNode<int>* takeInput(){
    cout<<"Enter Data : ";
    int rootdata;cin>>rootdata;
    TreeNode<int> * root = new TreeNode<int>(rootdata);
    cout<<"Enter no. of childs : ";
    int ch;cin>>ch;
    for(int i=0;i<ch;i++){
        TreeNode<int>* childNode = takeInput();
        root->child.push_back(childNode);
    }
    return root;
}

int main(){
    
    TreeNode<int>* root = takeInput();
    printtree(root);

    return 0;
}