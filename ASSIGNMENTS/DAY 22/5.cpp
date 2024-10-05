#include <iostream>
#include <climits>
using namespace std;

int findSecondLargest(int a[], int n)
{
  int first_largest = INT_MIN;

  for(int i =0;i<n;i++){
    if(first_largest < a[i]){
      first_largest = a[i];
    }
  }

  int second_largest = INT_MIN;
  for(int i = 0; i<n;i++){
    if(a[i]>second_largest && a[i]<first_largest){
      second_largest = a[i];
    }
  }
  return second_largest;
}

int main()
{
  int a[] = {5, 4, 8, 9, 12, 0};
  int n = sizeof(a)/sizeof(a[0]);

  int ans = findSecondLargest(a, n);
  
  cout<<"The second largest element in the array is: "<<ans;
  return 0;              
}