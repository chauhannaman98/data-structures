#include <iostream>
#include<malloc.h>
#include<stdlib.h>

using namespace std;

struct Node {
  int data;
  Node *next;
} *head = NULL;

void insert_beg(){
  Node *temp = new Node;
  temp->next = NULL;
  cout<<"\nenter data:";
  int data;
  cin>>data;
  temp->data = data;
  if(head==NULL){
    head = temp;
  }
  else{
    temp->next = head;
    head = temp;
  }
}

void delete_beg(){
  if(head==NULL){
  cout<<"\nlist is empty\n";
  }
  else {
    Node *current = head;
    head = head->next;
    free(current);
  }
}

void insert_end(){
  // Node *temp = create_node();
  Node *temp = new Node;
  temp->next = NULL;
  cout<<"\nenter data:";
  int data;
  cin>>data;
  temp->data = data;
  if(head==NULL){
    head = temp;
  }
  else {
    Node *current = head;
    while(current->next!=NULL){
      current = current->next;
    }
    current->next = temp;
  }
}
void delete_end(){
  if(head==NULL){
    cout<<"\nlist is empty\n";
  }
  else {
    Node *current = head;
    Node *t;
    while(current->next!=NULL){
      t = current;
      current = current->next;
    }
    free(t->next);
    t->next = NULL;
  }
}



void display(){
  Node *temp = head;
  while(temp!=NULL){
    cout<<temp->data<<"-->";
    temp = temp->next;
  }
  cout<<"NULL\n";
}

int main() {

  while(1){
    cout<<"1.insert_beg()"<<endl;
    cout<<"2.insert_end()"<<endl;
    cout<<"3.delete_beg()"<<endl;
    cout<<"4.delete_end()"<<endl;    
    cout<<"5.display()"<<endl;
    cout<<"6.exit()"<<endl;
    int choice;
    cin>>choice;

    switch(choice){
      case 1:
      insert_beg();
      break;
      case 2:
      insert_end();
      break;
      case 3:
      delete_beg();
      break;
      case 4:
      delete_end();
      case 5:
      display();
      break;
      case 6:
      exit(0);
      break;
      default:
      exit(0);
    }
  }



  return 0;

}
