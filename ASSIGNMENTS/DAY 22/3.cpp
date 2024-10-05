#include <iostream>           
using namespace std;

int main()
{
  int size;
  cout<<"Enter the size of the array: ";
  cin>>size;

  int arr[size];
  cout<<"Enter "<< size <<" elements of the array: "<<endl;
  for(int i= 0;i<size;i++){
    cin>>arr[i];
  }

  int element;
  cout<<"Enter the element to search for: ";
  cin>>element;

  int index = -1;
  for(int i= 0;i<size; i++){
    if(arr[i]==element){
      index = i;
      break;
    }
  }
  if(index != -1){
    cout<<"Element found at index: "<<index<<endl;
  } else{
    cout<<"-1"<<endl;
  }
  return 0;
}