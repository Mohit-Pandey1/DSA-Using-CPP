#include <iostream>
using namespace std;

int main()
{
  int arr[18];
  int sum = 0;                                  

  cout<<"Enter 18 integers: "<<endl;
  for(int i = 0;i<18;i++){                                                  
    cin>>arr[i];
  }

  for(int i = 0; i<18;i++){
    sum += arr[i];
  }

  int average = sum/18;
  cout<<"The average of the entered array is: "<<average<<endl;
  return 0;
}