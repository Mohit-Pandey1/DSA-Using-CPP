#include <iostream>
using namespace std;

int main()
{
  int temp;
  cout<<"Enter the temperature in Fahrenheit: ";
  cin>>temp;
  if(temp>70 && temp<90){
    cout<<"Yes, the temperature is suitable for swimming!!";
  }
  else{
    cout<<"No, the temperature is not suitable";
  }
}