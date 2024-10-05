#include <iostream>
using namespace std;

int main() 
{
  int num;
  cout<<"Enter the number";
  cin>>num;
  int rem,ans = 0, mul=1;

  for(int i=0; i<num; i++){
    rem = num%2;
    num = num/2;
    ans = rem*mul+ans;

    mul = mul*10;
  } 
  cout<<ans<<endl;
}