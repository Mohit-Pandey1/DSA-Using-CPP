//C++ programming to cyclically rotate an array by one
#include <iostream>
using namespace std;

void rotate(int arr[], int n)
{
  int x = arr[n-1], i;
  for(i = n-1; i> 0; i--)
  arr[i] = arr[i - 1];
  arr[0] = x;
} 

int main(){
  int arr[] = {1 ,2, 3, 4, 5}, i;
  int n = sizeof(arr) / sizeof(arr[0]);

  cout<<"Given Array is: "<<endl;
  for(i = 0; i< n; i++)
  cout<<arr[i]<<' ';

  rotate(arr,n);

  cout<<"Rotated array is: "<<endl;

  for(i=0; i<n;i++)
  cout<<arr[i]<<' ';

  return 0;
}