#include <iostream>
using namespace std;

int main()
{

  //print no. from 101-200
  // int i;
  // for(i = 101; i<= 200; i++)
  // {
  //   cout<<i<<endl;
  // }


  //print alphabets from a-z
//   char name;
//   for(name='a'; name <= 'z'; name++)
//   {
//     cout<<"   "<<name<<endl;
//   }

  //print numbers in reverse order
  // int num,i;
  // cout<<"Enter the number: ";
  // cin>>i;
  // for(num=i; num>=1; num = num -1)
  // {
  //   cout<<num<<endl;
  // }


//print numbers from 1 - 100 but difference is 3
  // int i;
  // for(i = 1 ; i <= 100 ; i = i + 3)
  // {
  //   cout<<i<<endl;
  // }


  //CREATING A MULTIPLICATION TABLE
  // int n,i;
  // cout<<"Enter a number: ";
  // cin>>n;

  // for(i = 1; i<=10; i=i+1)
  // {
  //   cout<<n*i<<endl;
  // }



  //factorial of a number
  // int i,n,fact = 1;
  // cout<<"Enter a number: ";
  // cin>>n;

  // for(i=1;i<=n;i+=1)
  // {                                                               
  //   fact = fact * i;
    
  // }
  // cout<<fact;

//PRIME NUMBER
  // int i,n;
  // cout<<"Enter a number: ";
  // cin>>n;

  // if(n<2)
  // {
  //   cout<<"The given number is not a prime number"<<endl;
  //   return 0;
  // }
  // else
  // {
  //   for(i=2;i<n;i+=1)
  //   {
  //     if(n%i==0)
  //     {
  //       cout<<"The given number is not a prime number"<<endl;
  //       return 0;
  //     }
  //   }
   
  // }
  //  cout<<"The given number is a prime number"<<endl;
  //   return 0;


//Fibonacci series of a number (VITAL)
  int curr,pre,last,i;
  curr = pre + last;
  pre = last;
  pre = curr;

  cout<<"Enter the first number: ";
  cin>>last;
  cout<<"Enter the 2nd number: ";
  cin>>pre;

  for (i=0;i<=curr;i++)
  {
    cout<<" "<<endl;
    cout<<curr;
  }
  

}