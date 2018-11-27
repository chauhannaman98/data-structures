#include <iostream>
#include <stdlib.h>

using namespace std;

int push(int a[], int top, int x){
  top = top + 1;
  a[top] = x;
  return top;
}

int pop(int a[], int top)
{
  top = top - 1;
  return top;
}

void display(int a[], int top){
  for(int i=0;i<=top;i++){
    cout<<a[i]<<" ";
  }
}


int main() {
  int top=-1;
  int a[100];

  while(1){
    cout<<"\n1.push()"<<endl;
    cout<<"2.pop()"<<endl;
    cout<<"3.display()"<<endl;
    cout<<"4.exit()"<<endl;
    int choice;
    cout<<"enter choice:";
    cin>>choice;
    switch(choice){
    case 1: 
    int elem;
    cout<<"\nEnter element:";
    cin>>elem;
    top = push(a,top,elem);
    break;
    case 2:
    top = pop(a,top);
    break;
    case 3:
    display(a,top);
    break;
    case 4:
    exit(0);
  }
  }



  return 0;
}
