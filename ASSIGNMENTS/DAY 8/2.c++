#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int row = 6;
  int col = 5;

  for(row=1; row <=5; row++)
  {
    for(col = 1; col<= 5; col++)
    {
      cout<<pow(col, 2)<<" ";
    }
    cout<<endl;
  }
}