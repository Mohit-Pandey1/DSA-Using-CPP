#include<iostream>
using namespace std;

int main()
{
  int age;
  cout<<"Enter the age of the spectator: ";
  cin>>age;

  if(age<=12)
  cout<<"You will get a discount of 65 on your ticket";
  else
  cout<<"Oops, your age is above the limit, so you can't get discount on the ticket!!";
}
