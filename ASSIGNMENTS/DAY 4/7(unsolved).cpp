#include<iostream>
using namespace std;

int main()
{
  int number;
  cout<<"\nEnter the number for checking: ";
  cin>>number;


  for(int i = 1; i<=number;i++)
  {
    if(i/4==0)
    {
      cout<<i<<"";
    }
  }
  cout<<"The number is divisble";
}