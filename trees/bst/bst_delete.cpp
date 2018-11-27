#include<bits/stdc++.h>

using namespace std;

struct Node{
  int data;
  Node *left, *right;
};

Node* new_node(int value){
  Node* temp = new Node;
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
  if(root==NULL || root->data == value)
    return root;
  if(value<root->data)
    return search(root->left, value);
  return search(root->right, value);
}

Node* insert(Node *root, int value){
  if(root==NULL) return new_node(value);
  if(value<root->data)
    root->left = insert(root->left, value);
  else if(value>root->data)
    root->right = insert(root->right, value);
  return root;
}

Node* min(Node *root){
  while(root!=NULL) root = root->left;
  return root;
}

Node* Delete(Node *root, int value){
  if(root==NULL) return root;
  else if(value<root->data)
    root->left = Delete(root->left, value);
  else if(value>root->data)
    root->right = Delete(root->right, value);

  // when value is found
  else {
    if(root->left==NULL && root->right==NULL){
      delete root;
      root = NULL;
    }
    else if(root->left==NULL){
      Node* temp = root;
      root = root->right;
      delete temp;
    }
    else if(root->right==NULL){
      Node* temp = root;
      root = root->left;
      delete temp; 
    }
    // when the node to be deleted has 2 kids
    else {
      Node *temp = min(root->right);
      root->data = temp->data;
      root->right = Delete(root->right, temp->data);
    }
  }

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

  inorder(root);
  cout<<endl;
  
  Delete(root, 40);

  inorder(root);

  return 0;
}
