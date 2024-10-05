#include <iostream>
using namespace std;

int main()
{
  int n = 20;
  int ans =1;

  int i =n;

  // while(i>=1){
  //   ans = ans * i;
  //   cout<<i<<"x";
  //   i--;
  // }

  // cout<<endl;
  // cout<<"Factorial of the number "<<n<<" is: "<<ans<<endl;

  // return 0;

  do{
    ans = ans *i;
    cout<<i<<"x";
    
    i--;

  }while(i>=1);

  cout<<endl;
  cout<<"Factorial of the number "<<n<<" is: "<<ans<<endl;

  return 0;
}