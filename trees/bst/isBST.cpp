#include<bits/stdc++.h>

using namespace std;

struct Node{
  int data;
  Node *left, *right;
};

int isBST(Node* node, int min, int max)  
{  
  if (node==NULL)  
     return 1; 
        
  if (node->data < min || node->data > max)  
     return 0;  
  
  return 
    isBST(node->left, min, node->data-1) &&  
    isBST(node->right, node->data+1, max);
}

Node *new_node(int value){
  Node *temp = new Node;
  temp->data = value;
  temp->left = temp->right = NULL;
  return temp;
}

void inorder(Node *root){
  if(root==NULL) return;
  inorder(root->left);
  cout<<root->data<<" ";
  inorder(root->right);
}

Node* search(Node *root, int value){
  if(root==NULL || root->data == value){
    return root;
  }
  if(value<root->data)
    return search(root->left, value);
  return search(root->right, value);
}

Node* insert(Node *node, int value){
  if(node==NULL) return new_node(value);
  if(value<node->data)
    node->left = insert(node->left, value);
  else if(value>node->data)
    node->right = insert(node->right, value);
  return node;
}

int main(){


  Node *root = NULL;
  root = insert(root, 50);
  insert(root, 30);
  insert(root, 20); 
  insert(root, 40); 
  insert(root, 70); 
  insert(root, 60); 
  insert(root, 80); 

  cout<<isBST(root, INT_MIN, INT_MAX);


  return 0;
}
