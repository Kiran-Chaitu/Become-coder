#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data = data;
        this->left=NULL;
        this->right=NULL;
    }
};
void Postorder(Node* root){
    if (root==NULL) return;
    Postorder(root->left);
    Postorder(root->right);
    cout<<root->data<<" ";
}

int main()
{
    Node* t1 = new Node(1);
    Node* t2 = new Node(2);
    Node* t3 = new Node(3);
    Node* t4 = new Node(4);
    Node* t5 = new Node(5);
    Node* t6 = new Node(6);
    Node* t7 = new Node(7);
    t4->left=t2;
    t4->right=t6;
    t2->left=t1;
    t2->right=t3;
    t6->right=t7;
    t6->left=t5;
    cout<<"Postorder Traversal : "<<endl;
    Postorder(t4);
    return 0;
}
