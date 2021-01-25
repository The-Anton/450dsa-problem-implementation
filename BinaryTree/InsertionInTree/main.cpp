#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

Node* CreateNode(int data){
    Node* node = new Node();
    node->data = data;
    node->right = node->left = nullptr;
    return node;
}

void inorderTraversal(Node* root){
    if(root == nullptr)
        return;

    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);
}

Node* insertNode(Node* root, int key){
    if(root == nullptr)
        return CreateNode(key);
    else{

        queue<Node*> q;
        q.push(root);

        while(!q.empty()){
            Node* temp = q.front();
            q.pop();

            if(temp->left!= nullptr){
                q.push(temp->left);
            } else{
                temp->left = CreateNode(key);
                return root;
            }

            if (temp->right!= nullptr){
                q.push(temp->right);
            } else{
                temp->right= CreateNode(key);
                return root;
            }

        }


    }
}




int main() {
    Node* root = CreateNode(30);
    root->left = CreateNode(15);
    root->left->left = CreateNode(7);
    root->right = CreateNode(34);
    root->right->right = CreateNode(17);
    root->right->left = CreateNode(4);

    int key;


    cout<<"Tree look like this - \n";
    inorderTraversal(root);

    cout<<"\nEnter the key value of the node to insert in the tree.\n";
    cin>>key;
    insertNode(root,key);

    cout<<"\nTree after inserting the node.\n";
    inorderTraversal(root);

    return 0;
}
