#include <iostream>
using namespace std;

int main()
{
  int arr[] = {64,25,12,22,11};
  int n = sizeof(arr)/sizeof(arr[0]);

  for(int i =0; i<n;i++){
    int maxIndex = i;
    for(int j =0; j<n;j++){
      if(arr[j]>arr[maxIndex]){
        maxIndex = j;
      }
    }

    if(maxIndex != i){
      int temp = arr[i];
      arr[i] = arr[maxIndex];
      arr[maxIndex] = temp;
    }
  }

  cout<<"Sorted array in decreasing order: ";
  for(int i =0; i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;

  return 0;
}