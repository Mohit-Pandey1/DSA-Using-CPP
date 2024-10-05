#include <iostream>
using namespace std;

int main()
{
  int n;

  cout<<"Enter the number of characters: ";
  cin>>n;

  char arr[n];

  cout<<"Enter the characters: ";
  for(int i = 0; i<n; i++){
    cin>>arr[i];
  }

  for(int i= 0; i<n-1; i++){
    int minIndex = i;
    for(int j =i+1;j<n;j++){
      if(arr[j]< arr[minIndex]){
        minIndex = j;
      }
    }

    if(minIndex != i){
      char temp = arr[i];
      arr[i] = arr[minIndex];
      arr[minIndex]  = temp;
    }
  }

  cout<<"Sorted array in ascending order: ";
  for(int i =0; i<n;i++){
    cout<<arr[i]<<" ";
  }

  cout<<endl;
  return 0;
}