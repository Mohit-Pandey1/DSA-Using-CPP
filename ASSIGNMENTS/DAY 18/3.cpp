#include <iostream>
using namespace std;

void swapValues(int &a, int &b, int &c){
  int temp = a;
  a = b;
  b = c;
  c = a;
  c = temp; 
}

int main()
{
  int a,b,c;

  cout<<"Enter the value of 'a': ";
  cin>>a;
  cout<<"Enter the value of 'b': ";
  cin>>b;
  cout<<"Enter the value of 'c': ";
  cin>>c;

  cout<<"Before swapping: "<<endl;
  cout<<"a = "<<a<<", b = "<<b<<", c = "<<c<<endl;
  
  swapValues(a,b,c);
  cout<<"After Swapping: "<<endl;
  cout<<"a = "<< a<<", b = "<<b<<", c = "<<c<<endl;

  return 0;
}