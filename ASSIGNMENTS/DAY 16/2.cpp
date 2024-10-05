#include <iostream>
using namespace std;

int main() 
{
  int num;
  cout<<"Enter the number: ";
  cin>>num;
  int mul = 1,ans=0,rem;

  for(int  i =0; i<num; i++){
    rem = num%10;
    num/=10;
    ans = mul*rem+ans;
    mul*=2;
  }
  cout<<ans<<endl;
}