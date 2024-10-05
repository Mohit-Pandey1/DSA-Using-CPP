#include <iostream>
using namespace std;

void Ascending(char arr[], int n){
  for(int i = 0; i< n-1; i++){
    for(int k = 0; k<n-i-1; k++){
      if(arr[k]>arr[k+1]){
        char temp = arr[k];
        arr[k] = arr[k+1];
        arr[k+1] = temp;
      }
    }
  }
}

void inputarray(char arr[], int n){
  cout<<"Enter the characters: ";
  for(int i = 0; i <n;i++){
    cin>>arr[i];
  }
}

void printarray(char arr[], int n) {
    cout << "Sorted array in ascending order: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
  int n;
  
  cout<<"Enter the number of characters: ";
  cin>>n;

  char arr[n];

  inputarray(arr, n);
  Ascending(arr,n);
  printarray(arr, n);

  return 0;
}