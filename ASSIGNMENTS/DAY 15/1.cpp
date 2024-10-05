#include <iostream>
using namespace std;

int main()
{
  //using while loop

  int i=2, n;
  cout<<"Enter the limit to print even numbers from 1: ";
  cin>>n;

  //   while(i<=n){
  //     cout<<i<<" ";
  //     i += 2; 
  //   }
  // cout<<endl;
  // return 0;

  //using do-while loop

  if(n>=2){
    do{
      cout<<i<<" ";
      i += 2;
    }while(i<=n);
  }
  cout<<endl;
  return 0;
}