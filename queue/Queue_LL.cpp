#include <iostream>

using namespace std;

struct Node{
  int data;
  Node *next;
} *front=NULL,*rear=NULL;

void enque(){
  Node *temp = new Node;
  cout<<"\enter data:";
  int data;cin>>data;
  temp->data = data;
  temp->next = NULL;
  if(front == NULL && rear==NULL){
    front = rear = temp;
  }
  else{
    rear->next = temp;
    rear = rear->next;
  }
}

void deque(){
  if(front==NULL){
    cout<<"\nlist is empty";
  }
  else{
    Node *temp = front;
    front = front->next;
    free(temp);
  }
}

void display(){
  Node *temp = front;
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
  }
}


int main() {
  while(1){
    cout<<"\n1.enque";
    cout<<"\n2.deque";
    cout<<"\n3.display";
    cout<<"\n4.exit";
    int n;
    cin>>n;
    switch(n){
      case 1: enque();break;
      case 2: deque();break;
      case 3: display();break;
      case 4: exit(0);
    }
  }
  
}
