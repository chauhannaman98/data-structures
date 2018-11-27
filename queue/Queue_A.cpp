#include <iostream>

using namespace std;

#define MAX 10

int queue[MAX];

int front = -1, rear = -1;

void enque(){
  if(rear == MAX-1){
    cout<<"\noverflow";
    return ;
  }
  cout<<"\nenter data";
  int data;cin>>data;
  if(front==-1 && rear==-1){
    front = rear = 0;
    queue[rear] = data;
  }
  else {
    rear = rear + 1;
    queue[rear] = data;
  }
}

void deque(){
  if(front==-1 || front>rear){
    cout<<"\nqueue is empty";
  }
  else{
    int val = queue[front];
    front = front + 1;
  }
}

void display(){
  if(front==-1 || front>rear){
    cout<<"\nqueue is empty";
    return ;
  }
  for(int i=front;i<=rear;i++){
    cout<<queue[i]<<" ";
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
