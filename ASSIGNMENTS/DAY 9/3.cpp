#include <iostream>
using namespace std;

int main() 
{
  int row, col;

  for(row =10;row<=15;row++){
    for(col=10;col<=row;col++){
      cout<<col<<" ";
    }
    cout<<endl;
  }
}