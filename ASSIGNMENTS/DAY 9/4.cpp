#include <iostream>
using namespace std;

int main() 
{
  int num =5;
  for(int i = num; i>0;--i){
    for(int j = 0; j<i;++j){
      cout<<char('A' + j)<<" ";
    }
    cout<<endl;
  } 
  return 0;
}