#include<bits/stdc++.h>
using namespace std;

int search(int a[], int x, int n){
  for(int i=0;i<n;i++)
    if(a[i]==x)
      return i;
  return -1;
}

void post_order(int in_[], int pre_[], int n){
  int root = search(in_, pre_[0], n);

  if(root!=0)
    post_order(in_,pre_+1,root);

  if(root!=n-1)
    post_order(in_+root+1,pre_+root+1,n-root-1);

  cout<<pre_[0]<<" ";
}

int main() 
{ 
  int in_[] = { 4, 2, 5, 1, 3, 6 }; 
  int pre_[] = { 1, 2, 4, 5, 3, 6 }; 
  int n = sizeof(in_) / sizeof(in_[0]); 
  cout << "Postorder traversal " << endl; 
  post_order(in_, pre_, n); 
  return 0; 
} 
