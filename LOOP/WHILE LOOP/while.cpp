#include <iostream>
using namespace std;

int main() 
{
  //Multiplication table of n

  // int n,i=1;    //initalization
  // cout<<"Enter a number : ";
  // cin>>n; 

  // while(i<=10)  //Break
  // {
  //   cout<<n*i<<endl;
  //   i++;        //update
  // }
  // cout<<endl;



  //write a program to find factors of a number
  int i = 1;
  int n;
  cout<<"Enter a number : ";
  cin>>n;

  while(i<=n)
  {
    if(n%i==0)
    {
    cout<<i<<endl;
    }
  i++;
  }

  //print number from 1 to n
  // int n;
  // cout<<"Enter the number : ";
  // cin>>n;
  // int i = 1;

  // while(i<=n)
  // {
  //   cout<<i<<endl;
  //   i++;
  // }
}