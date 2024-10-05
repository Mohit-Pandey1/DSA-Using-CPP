#include<iostream>
using namespace std;

int main()
{
  int n;
  cout<<"\nPlease enter the Limit to print the Odd Numbers: ";
  cin>>n;

  cout<<"\nList of Odd Numbers from 1 to "<<n<<"are \n";
  for(int i = 1; i<=n;i++)
  {
    if(i%2!=0)
    {
      cout<<i<<"";
    }
  }
  return 0;
}