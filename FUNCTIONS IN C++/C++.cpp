#include <iostream>
#include <cmath>
using namespace std;

//Write a program to convert 'small letters' to 'CAPITAL LETTERS'
// char convert(char name)
// {
//   char ans= name-'a'+'A';
//   return ans;
// }


// int main()
// {
//   char name;
//   cin>>name;
//   cout<<convert(name)<<endl; 

//   return 0;
// }



//FIND THE GIVEN THE NUMBER IS ARMSTRONG NUMBER OR NOT 

// "DEFINATION OF ARMSTRONG NUMBER: Armstrong number is a number that is equal to the sum of cubes of its digits. For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers." //

int countDigit(int n)
{
  int count =0 ;
  while(n)
  {
    count ++;
    n/=10;
  }
  return count;
}

bool Armstrong(int num, int digit)
{
  int n = num,ans=0;
  while(n)
  {
    int rem= n%10;
    n/=10;
    ans = ans + pow(rem,digit);
  }
  if(ans==num)
  return 1;

  else
  return 0;
}

int main()
{
  int num;
  cin>>num;
  int digit= countDigit(num);

  cout<<Armstrong(num,digit);
}
