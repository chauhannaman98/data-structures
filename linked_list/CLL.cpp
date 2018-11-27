#include<stdlib.h>
#include<iostream>


using namespace std;


struct Node {
  int data;
  Node* next;
}*start=NULL;

void insert(){
  cout<<"\nEnter data:";
	int data;
	cin>>data;
	Node *temp = new Node;
	temp->data = data;
  temp->next = NULL;

  if(start==NULL){
    start = temp;
    temp->next = start;
  }

  else{
    Node* current = start;
    while(current->next!=start)
      current = current->next;
    
    current->next = temp;
    temp->next = start;
  }
}

void traverse(){
	Node *temp = start;
	if(start==NULL){
		cout<<"Circular linked list is empty\n";
	}
	else{
		while(temp->next!=start){
			cout<<temp->data<<" ";
			temp = temp->next;
	    }
      cout<<temp->data;
	}
}





int main(){
	
	while(1){
		cout<<"\n1.insert()"<<endl;
	cout<<"2.traverse()"<<endl;
	cout<<"3.exit()"<<endl;
	
	int n;
	cout<<"enter choice:";
	cin>>n;
	switch(n){
		case 1: insert();
		break;
		case 2: traverse();
		break;
		case 3: exit(0);
	}
}}
