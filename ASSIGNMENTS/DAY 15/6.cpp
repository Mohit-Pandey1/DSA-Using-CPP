#include <iostream>
using namespace std;

void isPrime(int n){
  if(n<2){
    cout<<n<<" is not a prime number";
    return;
  }

  int i =2;
  bool isPrime = true;

  while(i*i<=n){
    if(n%i ==0){
      isPrime = false;
      break;
    }
    i++;
  }
  if(isPrime){
    cout<<n<<" is a prime number."<<endl;
  }
  else{
    cout<<n<<" is not a prime number."<<endl;
  }
}

int main()
{
  int n;
  cout<<"Enter a number: ";
  cin>>n;
  isPrime(n);
  return 0;
}