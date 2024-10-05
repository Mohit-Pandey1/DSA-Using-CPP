#include <iostream>
using namespace std;

int main()
{
  int arr[20];
  int sum = 0;                                  

  cout<<"Enter 20 integers: "<<endl;
  for(int i = 0;i<20;i++){                                                  
    cin>>arr[i];
  }

  for(int i = 0; i<20;i++){
    sum += arr[i];
  }

  cout<<"The sum of the entered numbers is: "<<sum<<endl;
  return 0;
}