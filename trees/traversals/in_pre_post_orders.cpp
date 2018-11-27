#include<bits/stdc++.h>

using namespace std;

struct Node{
  int data;
  Node *left,*right;
  Node(int data){
    this->data = data;
    left = right = NULL;
  }
};

void in_order(Node *node){
  if(node==NULL) return;
  
  in_order(node->left);
  
  cout<<node->data<<" ";

  in_order(node->right);
}

void pre_order(Node *node){
  if(node==NULL) return;

  cout<<node->data<<" ";

  pre_order(node->left);

  pre_order(node->right);
}

void post_order(Node *node){
  if(node==NULL) return;

  post_order(node->left);

  post_order(node->right);

  cout<<node->data<<" ";
}

int main(){

  Node *root = new Node(1);

  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);

  cout<<"\ninorder traversal\n";
  in_order(root);

  cout<<"\npreorder traversal \n";
  pre_order(root);

  cout<<"\npostorder traversal \n";
  post_order(root);


  return 0;
}
