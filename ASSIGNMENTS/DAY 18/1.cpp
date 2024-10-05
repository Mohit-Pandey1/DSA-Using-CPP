#include <iostream>
#include <cmath>
using namespace std;

int cube(int num){
  return pow(num, 3);
}

int main() 
{
  int n, cubeResult                                                                         ;
  cout<<"Enter the number: ";
  cin>>n;
  cubeResult = cube(n);
  cout<<"Cube of"<< n<<"is : "<<cubeResult<<endl;
  return 0;
}