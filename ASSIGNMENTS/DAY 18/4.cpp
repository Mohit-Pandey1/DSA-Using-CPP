#include <iostream>
using namespace std;

void swapNumbers(int &a, int &b){
  a = a+b;
  b = a-b;
  a = a-b;
}

int main()
{
  int a, b;
  cout<<"Enter two integers (a and b) between -10000 and 10000: ";
  cin>>a>>b;

  if (a >= -10000 && a <= 100000 && b >= -10000 && b <= 100000) {
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
        
    swapNumbers(a, b);
        
    cout << "After swapping: a = " << a << ", b = " << b << endl;
  } else {
      cout << "Input values are out of range!" << endl;
  }
    
    return 0;
}