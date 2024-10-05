/*
    1 8 27 64 125 216
    1 8 27 64 125 216
    1 8 27 64 125 216
    1 8 27 64 125 216
    1 8 27 64 125 216
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int row = 6;
  int col = 5;

  for(row=1; row <=6; row++)
  {
    for(col = 1; col<= 6; col++)
    {
      cout<<pow(col, 3)<<" ";
    }
    cout<<endl;
  }
}