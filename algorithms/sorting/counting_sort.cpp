#include<iostream>

using namespace std;

void counting_sort(int a[], int n){
  int count[10] = {0};
  int i;
  
  for(i=0;i<n;i++)
    count[a[i]]++;
  
  for(i=1;i<=n;i++)
    count[i] += count[i-1];

  int output[n];

  for(i=0;i<n;i++){
    output[count[a[i]]-1] = a[i];
    --count[a[i]];
  }
  
  for(int i=0;i<n;i++)
    a[i] = output[i];
}

int main(){
  int a[] = {1, 4, 1, 2, 7, 5, 2};
  int n = sizeof(a)/sizeof(a[0]);
  counting_sort(a, n);

  for(auto x:a) cout<<x<<" ";

  return 0;
}