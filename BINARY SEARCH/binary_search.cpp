#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key)
{
  //start, mid and end
  int start = 0, end =n-1,mid;

  while(start<=end)
  {
    //find mid
    mid = start+(end-start)/2;        //(start+end)/2; this statement is valid but later it can also give us a error of interger overflow as it contain higher values.
    //arr[mid]==key
    if(arr[mid]==key)
    return mid;
    //arr[mid]<key
    else if(arr[mid]<key)
    start = mid+1;
    //arr[mid]>key
    else
    end = mid-1;
  }
  return -1;
}


int main(){
  int arr[1000];
  int n;
  cout<<"Enter the size of array: ";
  cin>>n;
  cout<<"Enter the elements: ";
  for(int i=0;i<n;i++)
  cin>>arr[i];

  int key;
  cout<<"Enter the key: ";
  cin>>key;

  cout<<BinarySearch(arr,n,key);
  return 0;
} 