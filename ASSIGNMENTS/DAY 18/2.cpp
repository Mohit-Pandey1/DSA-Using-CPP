#include <iostream>
using namespace std;

int reversenumber(int n){
  int reversed = 0;
  while(n!=0){
    int digit = n%10;
    reversed = reversed*10+digit;               
    n/=10;
  }
  return reversed;                                                            
}

int main()
{
  int n;
  cout<<"Enter the integer between -5000 and 5000: ";
  cin>>n;

  if(n>=-5000 && n<=5000){
    int result = reversenumber(n);
    cout<<"Reversed number: "<< result <<endl;
  }else{
    cout<<"Input is out of range!!"<<endl;
  }

  return 0;
}