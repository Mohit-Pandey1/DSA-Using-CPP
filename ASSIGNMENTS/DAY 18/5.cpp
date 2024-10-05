#include <iostream>
using namespace std;

void printfMessage(int n){
  for(int i = 0; i <n; i++){
    cout<<"Hello Coder Army"<<endl;
  }
}

int main() 
{
  int n;

  cout<<"Enter the limit of printing the text: ";
  cin>>n;

  printfMessage(n);
  return 0;
}