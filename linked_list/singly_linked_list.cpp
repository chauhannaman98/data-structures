#include <iostream>

using namespace std;

struct Node {
  int data;
  Node* next;
};

int main() {

  Node* head = NULL;

  int n;
  cout<<"Enter number of nodes:";
  cin>>n;
  int i = n;

  while(n--) {
    Node* temp = new Node;
    int data;
    cout<<"Enter data:";
    cin>>data;
    temp->data = data;
    temp->next = NULL;
    if(head == NULL) {
      head = temp;
    }
    else {
      Node* current = head;
      while(current->next!=NULL) {
        current = current->next;
      }
      current->next = temp;
    }

  }

  // traversing nodes to display

  while(i--) {
    cout<<head->data<<" ";
    head = head->next;
  }


}
