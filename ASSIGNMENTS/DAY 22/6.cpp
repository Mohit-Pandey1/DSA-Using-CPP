#include <iostream>
using namespace std;

int main()
{
  int n;

  cout<<"Enter the number of elements (greater than 3): ";
  cin>>n;

  while(n<=3){
    cout<<"Number of elements must be greater than 3.. Please enter valid input: ";
    cin>>n;
  }

  int arr[n];
  cout<<" Enter "<< n <<" elements: "<<endl;
  for(int i =0;i<n;i++){
    cin>>arr[i];
  } 

  int smallest = arr[0];

  for(int  i = 1; i< n;i++){
    if(arr[i]<smallest){
      smallest = arr[i];
    }
  }

  cout << "The smallest element is: " << smallest << endl;

  return 0;
}