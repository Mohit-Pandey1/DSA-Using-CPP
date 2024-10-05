#include <iostream>
using namespace std;

int main() 
{
  int n;
  cout<<"Enter the month number for getting the month name: ";
  cin>>n;

  switch(n)
  {
    case 1:
    cout<<"January";
    break;

    case 2:
    cout<<"February";
    break;

    case 3:
    cout<<"March";
    break;

    case 4:
    cout<<"April";
    break;

    case 5:
    cout<<"May";
    break;

    case 6:
    cout<<"June";
    break;

    case 7:
    cout<<"July";
    break;

    case 8:
    cout<<"August";
    break;

    case 9:
    cout<<"Spetember";
    break;

    case 10:
    cout<<"Ocotober";
    break;

    case 11:
    cout<<"November";
    break;

    case 12:
    cout<<"December";
    break;

    default:
    cout<<"Invalid Number, Month Not Found!!";
  }
}