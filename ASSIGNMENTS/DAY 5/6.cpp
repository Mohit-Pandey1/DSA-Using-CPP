#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int n;
  cout<<"Enter the number: ";
  cin>>n;

  int sum =0;

  for(int count=1;count<=n;++count){
    sum += pow(count, 3);
  }

  cout<<"The sum of squares of the first "<<n<<" number is "<<sum;

  return 0;
}