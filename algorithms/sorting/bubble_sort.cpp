#include <iostream>

using namespace std;

int main() {

  int n;

  cin>>n;

  int a[n],temp;

  for(int i=0;i<n;i++){
    cin>>a[i];
  }

  for(int i=0;i<n;i++){
    for(int j=0;j<n-1-i;j++){
      if(a[j]>a[j+1]){
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
    }
  }

  for(auto x:a){
    cout<<x<<" ";
  }

  return 0;
}
