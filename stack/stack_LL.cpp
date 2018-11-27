#include<iostream>
#include<stdlib.h>

using namespace std;

struct Node {
	int data;
	Node* next;
};

Node *top = NULL;

void push() {
	int data;
	cout<<"enter data:";
	cin>>data;
	Node *temp = new Node;
	temp->data = data;
	temp->next = NULL;
	if(top==NULL) {
		top = temp;
	}
	
	else {
		temp->next = top;
		top = temp;
	}

		
}

void pop(int n) {
	while(n--){
		Node *temp = top;
		top = top->next;
		free(temp);
	}
}

void display() {
	Node *temp = top;
	if(top == NULL) {
		cout<<"NULL";
	}
	while(temp!=NULL) {
		cout<<temp->data<<"-->";
		temp = temp->next;
	}
	cout<<"NULL"<<endl;
}

int main() {
	int n;
	while(1) {
		cout<<"1.push()"<<endl;
		cout<<"2.pop()"<<endl;
		cout<<"3.display()"<<endl;
		cout<<"4.exit"<<endl;
		cout<<"enter choice:";
		cin>>n;
		switch(n){
			case 1: push();
			break;
			case 2:
			int x;
			cout<<"enter number of nodes to pop:";
			cin>>x; 
			pop(x);
			break;
			case 3: display();
			break;
			case 4: exit(0);
		}
	}
	return 0;
}
