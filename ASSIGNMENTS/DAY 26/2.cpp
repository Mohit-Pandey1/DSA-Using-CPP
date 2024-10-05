#include<iostream>
using namespace std;

void Increasing(int arr[], int n){
  for(int i = n-1; i > 0; i--){
    for(int j = n-1; j >n-i-1; j--){
      if(arr[j]<arr[j-1]) {
        int temp = arr[j];
        arr[j] = arr[j-1];
        arr[j-1] = temp;
      }
    }
  }
}

void inputArray(int arr[], int n){
  cout<<"Enter the elements of the array: ";
  for(int i =0;i<n;i++){
    cin>>arr[i];
  }
}

void printarray(int arr[], int n){
  cout<<"Sorted array in increasing order: ";
  for(int i =0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  cout<< endl;
}

int main()
{
  int n; 
  cout<<"Enter the number of elements: ";
  cin>>n;

  int arr[n];

  inputArray(arr, n);
  Increasing(arr, n);
  printarray(arr, n);

  return 0;
}