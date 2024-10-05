#include <iostream>
using namespace std;

long long factorial(int num){
  long long fact = 1;
  for(int i =2; i<= num; i++){
    fact *= i;
  }
  return fact;
}

long long nCr(int n, int r){
  if(r>n){
    return 0;
  }
  
  return factorial(n) / (factorial(r) * factorial(n - r));
}

int main()
{
  int n,r;
  cout<<"Enter the value of r and n: ";
  cin>>n >> r;

  if(n>=r && n>=0 && r>=0) {
    long long result = nCr(n,r);
    cout << "nCr (" << n << "C" << r << ") = " << result << endl;
  }else {
    cout<<"Invalid input! Ensure that n>=r and both n and r are non-negative"<<endl;
  }
  return 0;
}