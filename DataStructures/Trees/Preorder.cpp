/*
Problem Statement

You are given a pointer to the root of a binary tree; print the values in preorder traversal.

You only have to complete the function given below.  
Node is defined as  

struct node
{
    int data;
    node* left;
    node* right;
};

*/

void Preorder(node *root) {
    if(root != NULL){
        cout << root->data << " ";
        Preorder(root->left);
        Preorder(root->right);
    }
}

