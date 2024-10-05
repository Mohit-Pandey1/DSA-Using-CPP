#include <iostream>
using namespace std;

int main()
{
  int num;
  cout<<"Enter the number: ";
  cin>>num;

  if(num%2==0 && num>0){
    cout<<"The given number is positive even integer";
  }
  else{
    cout<<"No the given number is neither a positive integer nor a even integer";
  }
}