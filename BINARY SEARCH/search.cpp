//Find the first and last occurence of a number N and also count the occurence of number N

#include <iostream>
using namespace std;

int firstOccurence(int arr[], int size, int n){
  int low = 0, high = size+1;
  int first = -1;

  while(low <= high){
    int mid = low+high/2;

    if(arr[mid]==n){
      first = mid;
      high = mid-1;
    }

    else if(arr[mid] > n){
      high = mid - 1;
    }
    else{
      low = mid+1;
    }
  }

  return first;
}

int lastOccurence(int arr[], int size, int n){
  int low = 0, high = size-1;
  int last = -1;

  while(low <= high){
    int mid = low+(high-low)/2;

    if(arr[mid]==n){
      last = mid;
      low = mid+1;
    }
    else if(arr[mid]>n){
      high = mid-1;
    }
    else{
      low = mid+1;
    }
  }

  return last;
}

void findOccurence(int arr[], int size, int n){
  int first = firstOccurence(arr, size, n);
  int last = lastOccurence(arr, size, n);

  if(first == -1){
    cout<<n<<"number not found!!"<<endl;
  }
  else{
    cout<<"1st occurence "<< n << "at index = "<< first<<endl;
    cout<<"Last occurence"<< n <<"at index = "<< last << endl;
    cout<<"No. of occurences of "<< n <<" = "<< (last-first + 1)<<endl;
  }
}

int main(){
  int size,n;

  cout<<"Enter the size of the array: ";
  cin>>size;

  int arr[size];

  cout<<"Enter the elements of sorted array : ";
  for(int i = 0; i < size; i++){
    cin>>arr[i];
  }

  cout<<"Enter the number to find: ";
  cin>>n;

  findOccurence(arr, size, n);
  return 0;

}
