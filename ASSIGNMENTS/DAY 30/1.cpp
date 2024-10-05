#include <iostream>
using namespace std;

int binaryDecreasing(int arr[], int low, int high, int key){
  while(low<=high){
    int mid = low+(high - low)/2;

    if(arr[mid] == key){
      return mid;
    }

    if(arr[mid]<key){
      high = mid-1;
    }
    else{
      low = mid+1;
    }
  }
  return -1;
}

int main()
{
  int arr[] = {18, 8, 6, 4, 2};
  int n = sizeof(arr) / sizeof(arr[0]);
  int key;

  cout<<"Enter the key to search: ";
  cin>>key;

  int index = binaryDecreasing(arr, 0, n-1, key);

  if(index != -1){
    cout<<"Element "<<key<<" is present at index "<<index<<endl;
  }
  else{
    cout<<"Element not found"<<endl;
  }
  return 0;
}