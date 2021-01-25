#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }

};

int main() {
    Node* root = new Node(10);

    root->left = new Node(2);
    root->right = new Node(5);

    Node* temp = root->right;
    cout<<temp->data;
    return 0;
}
