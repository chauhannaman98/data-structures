#include<bits/stdc++.h>

using namespace std;

struct Node {
  int data;
  Node *left;
  Node *right;
} *root = NULL;

Node* new_node(){
  cout<<"\nenter data:";
  int data;
  cin>>data;
  Node *temp = new Node;
  temp->left = NULL;
  temp->right = NULL;
  return temp;
}

int main(){

  root = new_node();
  root->left = new_node();
  root->right = new_node();
  root->left->left = new_node();
  
  return 0;
}
