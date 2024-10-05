#include <iostream>
using namespace std;

int main()
{
// // Add a digit 
//   int num,sum = 0,m;
//   cout<<"Enter a number:"<<" ";
//   cin>>num;

//   while(num>0){
//     m=num%10;
//     sum+=m;
//     num/=10;
//   } 
//   cout<<"THE SUM OF DIGITS ARE = "<<sum<<endl;
//   return 0;

  //Leap year
  // int year;
  
  // cout<<"Enter a year ";
  // cin>>year;

  // if((year%4==0 && year%100!=0) || year%400==0)
  // {
  //   cout<<"The given year is a leap year";
  // }
  // else
  // {
  //   cout<<"The year is not a leap year";
  // }
  // return 0;

  //Reverse a integer
  // int n , reverse=0,rem;
  // cout<<"Enter a number : ";
  // cin>>n;

  // while(n!=0)
  // {
  //   rem=n%10;
  //   reverse=reverse*10+rem;
  //   n/=10;
  // }
  // cout<<"Your Reverse number is: "<<reverse<<endl;
  // return 0;

  // Complement of Base 10 Integer
  // int n;
  // cout<<"Enter a number: ";
  // cin>>n;

  // if(n==0)
  // return 1;
  // int ans=0,mul=1,rem;
  // while(n)
  // {
  //   rem=n%2;
  //   rem=rem^2;
  //   n/=10;
  //   ans=ans+rem*mul;
  //   mul*=2;
  // }
  // cout<<"Complement of given integer is : "<<ans<<endl;
  // return ans;

  //Power of two
  // int num;
  // cout<<"Enter a number: ";
  // cin>>num;

  // if(num<1)
  // return 0;

  // while(num!=1)
  // {
  //   if(num%2==1)
  //   return 0;
  //   num/=2;
  // }
  // cout<<num<<endl;
  // return 1;

  int x;
  cout<<"______ : ";
  cin>>x;

  if(x<0)
  return 0;

  int num=x,rem,ans=0;
  while(num)
  {
    rem=num%10;
    num/=10;
    if(ans>INT_FAST8_MAX/10)
    return 0;
    ans=ans*10+rem;
  }
  if(ans==x)
  
  return 1;

  else
  return 0;
}