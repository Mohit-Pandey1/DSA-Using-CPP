#include <iostream>
using namespace std;

void sortIncresing(int arr[], int n){
  for(int i = n-2; i >=0; i--){
    int key = arr[i];
    int j = i+1;

    while(j<n && arr[j]<key){
      arr[j-1] = arr[j];
      j++;
    }
    arr[j-1] = key;
  }
}

void inputarray(int arr[], int n){
  cout<<"Enter the elements of the array: ";
  for(int i =0; i<n; i++){
    cin>> arr[i];
  }
}

void printarray(int arr[], int n){
  cout<<"Sorted array in increasing order: ";
  for(int i = 0; i<n;i++){
    cout<< arr[i]<<" ";
  }
  cout<<endl;
}


int main(){
  int n;
  cout<<"Enter the number of elements: ";
  cin>>n;

  int arr[n];

  inputarray(arr,n);
  sortIncresing(arr, n);
  printarray(arr, n);

  return 0;
}