#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node{
 int data;
 Node* left;
 Node* right;
};

Node* createNode(int key){
    Node* node = new Node();
    node->data = key;
    node->right = node->left = nullptr;
}


int deleteRightMostNode(Node* root, Node* del*){
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node*
    }
    return root;
}

Node* deleteNode(Node* root, int key){
    if(root == nullptr)
        return root;
    else if(root->data == key)
        return NULL;
    else{

        queue<Node*> q;
        q.push(root);

        while(!q.empty()){
            Node* temp = q.front();
            q.pop();

            if(temp->data == key){
                int deletedKey = deleteRightMostNode(root, temp);
                temp->data = deletedKey;
                return root;
            }

            if(temp->left != nullptr)
                q.push(temp->left);

            if(temp->right != nullptr)
                q.push(temp->right);
        }
    }
}


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
