// code from geeksforgeeks

#include<bits/stdc++.h>

using namespace std;

struct Node {
  int data;
  Node *left, *right;
  int height;
};

int max(int a, int b){
  return (a>b)?a:b;
}

int height(Node* node){
  if(node==NULL) return 0;
  return node->height;
}

Node* new_node(int value){
  Node *temp = new Node;
  temp->data = value;
  temp->left = temp->right = NULL;
  temp->height = 1;
  return temp;
}

Node* left_rotate(Node *x){
  Node *y = x->right;
  Node *T2 = y->left;

  // rotation
  y->left = x;
  x->right = T2;

  // update heights
  x->height = max(height(x->left),height(x->right))+1;
  y->height = max(height(y->left),height(y->right))+1;
  
  // return new root
  return y;
}

Node* right_rotate(Node *y){
  Node *x = y->left;
  Node *T2 = x->right;

  // rotation
  x->right = y;
  y->left = T2;

  // update heights
  x->height = max(height(x->left),height(x->right))+1;
  y->height = max(height(y->left),height(y->right))+1;
  
  // return new root
  return x;
}

int getBalance(Node *N){
  if(N==NULL) return 0;
  return height(N->left) - height(N->right);
}

Node* insert(Node *node, int value){
  if(node==NULL) return new_node(value);

  
}
