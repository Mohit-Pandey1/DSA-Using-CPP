#include <iostream>
using namespace std;

int main(){
  char letter = 'A';
  cout<<"Capital Letter: ";
  while(letter <= 'Z'){
    cout<< letter<< " ";
    letter++;
  }
  cout<< endl;

  letter = 'a';
  while(letter <= 'z'){
    cout<<letter<<" ";
    letter++;
  }
  cout<<endl;

  return 0;
}