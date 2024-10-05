//Search a number in sorted rotated array [for duplicate numbers]

#include <iostream>
using namespace std;

int srotation(int arr[], int size, int target){
  int low = 0, high = size - 1;

  while(low<=high){
    int mid = low+(high-low)/2;

    if(arr[mid] == target){
      return mid;
    }

    if(arr[low] == arr[mid] && arr[high]==arr[mid]){
      low++;
      high--;
    }

    else if(arr[low]<=arr[mid]){
      if(arr[low]<=target && target < arr[mid]){
        high = mid-1;
      }
      else{
        low = mid+1;
      }
    }

    else{
      if(arr[mid]<target && target <= arr[high]){
        low= mid + 1;
      }
      else{
        high = mid - 1;
      }
    }
  }

  return -1;
}


int main(){
  int size, target;

  cout<<"Enter the number of elements in the array: ";
  cin>>size;

  int arr[size];

  cout<<"Enter the elements of the array: ";
  for(int i =0;i < size; i++){
    cin>>arr[i];
  }

  cout<<"Enter the element to search: ";
  cin>>target;

  int result= srotation(arr, size, target);

  if(result != -1){
    cout<<"Element found at index: "<< result<< endl;
  }
  else{
    cout<<"Element not found!!!"<< endl;
  }

  return 0;
}