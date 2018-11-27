// 1) Create an empty stack S.
// 2) Initialize current node as root
// 3) Push the current node to S and set current = current->left until current is NULL
// 4) If current is NULL and stack is not empty then 
//      a) Pop the top item from stack.
//      b) Print the popped item, set current = popped_item->right 
//      c) Go to step 3.
// 5) If current is NULL and stack is empty then we are done.



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

void in_order(Node *root){
  Node *curr = root;
  stack<Node*> s;

  while(curr!=NULL || s.empty()==false){
    while(curr!=NULL){
      s.push(curr);
      curr = curr->left;
    }
    curr = s.top();
    s.pop();
    cout<<curr->data<<" ";
    curr = curr->right;
  }

}

int main(){

  Node *root = new Node(1);

  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);

  cout<<"\ninorder traversal without recursion\n";
  in_order(root);


  return 0;
}
