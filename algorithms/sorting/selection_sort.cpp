#include<iostream>

using namespace std;

int main(){

  int n;
  cin>>n;
  int a[n],min_idx,temp;

  for(int i=0;i<n;i++){
    cin>>a[i];
  }

  for(int i=0;i<n-1;i++){
    min_idx = i;
    for(int j=i+1;j<n;j++){
      if(a[j]<a[min_idx]){
        min_idx=j;
      }
    }

    temp = a[min_idx];
    a[min_idx] = a[i];
    a[i] = temp;

  }

  for(auto x:a){
    cout<<x<<" ";
  }








  return 0;
}
