#include <iostream>
using namespace std;

int main()
{
  int n;
  cout<<"Enter an positive integer: ";
  cin>>n;


  if(n <= 0){
    cerr<<"Please First Enter a positive integer"<<endl;
    return 1;
  }

  int i =1;
  // while(i<=n){
  //   if(i%3==0 || i%5==0){
  //     i++;
  //     continue;
  //   }
  //   cout<< i << " ";
  //   i++;
  // }
  // cout<<endl;
  // return 0;

  do{
    if(i%3==0 || i%5==0){
      i++;
      continue;
    }
    cout<< i << " ";
    i++;
  }while(i<=n);

  cout<<endl;
  return 0;
}