#include <iostream>

using namespace std;

int main() {

  int n,x;

  cin>>n;

  int a[n];

  int min=0,max=n-1,mid;

  cout<<"Enter array:\n";

  for(int i=0;i<n;i++){
    cin>>a[i];
  }

  cout<<"Enter element to search:";
  cin>>x;  

  int index = -1;

  while(min<=max){
    mid = (min+max)/2;
    if(a[mid]==x) index=mid;
    if(x>a[mid]) min = mid+1;
    else max = mid-1;
  }

  cout<<index;


  return 0;
}
