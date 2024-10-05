#include <iostream>
using namespace std;

int main()
{
  int n;
  cout<<"Enter the number: ";
  cin>>n;

  int sum =0;

  for(int count=1;count<=n;++count){
    sum += count * count ;
  }

  cout<<"The sum of squares of the first "<<n<<" number is "<<sum;

  return 0;
}