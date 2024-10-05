#include <iostream>
using namespace std;


//Sum of two numbers and print "Hello WORLD"

// int Sum(int m, int n) //Function declare
// {
//   int ans = m+n; //Function define
//   return ans;
// }
// int Mul(int m, int n)
// {
//   int ans=m*n;
//   return ans;
// }

// void fun()
// {
//   cout<<"Hello Coder Army\n";
// }

// int main()
// {
//   int a,b;
//   cout<<"Enter 2 numbers: ";
//   cin>>a>>b;

//   //function call
//   int ans = Sum(a,b);
//   cout<<ans;
//   cout<<endl;
//   cout<<Mul(a,b);
//   cout<<endl;
//   fun();
// }

//Printing Prime number and Factorial of number 

// bool Prime(int n)
// {
//   if(n<2);
//   return 0;

//   for(int i=2;i<n;i++)
//   {
//     if(n%i==0)
//     return 0;
//   }
//   return 1;
// }

// int Fact(int n)
// {
//   int ans=1;
//   for(int i=1;i<=n;i++)
//   ans=ans*i;

//   return ans;
// }

// int main()
// {
//   int a,b;
//   cout<<"Enter the number: ";
//   cin>>a>>b;

//   //A is prime or not
//   cout<<Prime(a)<<endl;
//   //Factorial of a
//   cout<<Fact(a)<<endl;
//   //B is prime or not
//   cout<<Prime(b)<<endl;
//   //Factorial of b
//   cout<<Fact(b)<<endl;
//   //B-A is prime or not
//   cout<<Prime(b-a)<<endl;
//   //Factorial of B-A
//   cout<<Fact(b-a)<<endl;
// }

//Swapping two numbers

void Swap(int* a, int* b)  //Pass by reference
{
  int temp= *a;
  *a=*b;
  *b=temp;
}

int main()
{
  int a=10,b=22;
  cout << "Before Swapping: " << endl; 
  cout << " a: " << a << " b: " << b << endl; 
  
  // calling swap 
  Swap(&a, &b); 
  
  cout << "After Swapping: " << endl; 
  cout << " a: " << a << " b: " << b << endl; 
  
  return 0; 
}