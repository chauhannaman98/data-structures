#include<iostream>

using namespace std;

struct Node{
    int data;
    int priority;
    Node* next;
} *head=NULL;

Node* new_node(int d, int p){
    Node* temp =  new Node;
    temp->data = d;
    temp->priority = p;
    temp->next = NULL;
    return temp;
}

int peek(){
    return head->data;
}

void pop(){
    Node* temp = head;
    head = head->next;
    free(temp);
}

bool isEmpty(){
    return head == NULL;
}

void push(int d, int p){
    Node *start = head;
    Node *temp = new_node(d, p);
    if(head == NULL) head = temp;
    else if(head->priority>p){
        temp->next = head;
        head = temp;
    }
    else{
        while(start->next!=NULL && start->next->priority<p)
            start = start->next;
        temp->next = start->next;
        start->next = temp;
    }
}

int main(){
    Node* pq = new_node(4, 1);
    push(5, 2);
    push(6, 3);
    push(7, 0);
    push(4, 1);
    while(!isEmpty()){
        printf("%d", peek());
        pop();
    }
    return 0;
}
