#include<iostream>
#include<malloc.h>
#include<stdlib.h>

using namespace std;

struct Node {
  int data;
  Node *prev;
  Node *next;
} *head=NULL;

void insert_doubly(int data){
  Node *temp = new Node;
  temp->data = data;
  temp->prev=temp->next = NULL;
  if(head==NULL){
    head = temp;
  }
  else{
    Node *current = head;
    while(current->next!=NULL){
      current = current->next;
    }
    current->next = temp;
    temp->prev = current;
  }
}

void delete_doubly(){
  if(head==NULL) cout<<"\nList is empty\n";
  else {
    Node *current = head;
    while(current->next!=NULL) {
      current = current->next;
    }
    Node *prev = current->prev;
    prev->next = NULL;
    free(current);
  }
}

void display(){
  Node *current = head;
  
  while(current!=NULL){
    cout<<current->data<<"<->";
    current = current->next;
  }
  cout<<"NULL";
}

int main(){


  while(1){
  cout<<"\n1.insert()"<<endl;
  cout<<"2.delete()"<<endl;
  cout<<"3.display()"<<endl;
  cout<<"4.exit()"<<endl;
  int choice;
  cout<<"enter choice:";
  cin>>choice;

  switch(choice){
    case 1:
    cout<<"\nEnter data:";
    int data;
    cin>>data;
    insert_doubly(data);
    break;
    case 2:
    delete_doubly();
    break;
    case 3:
    display();
    break;
    case 4:
    exit(0);
  }
  }





  return 0;
}
