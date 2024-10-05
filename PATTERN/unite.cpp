#include<bits/stdc++.h>

using namespace std;


void halfPyramid();
void fullPyramid();
void rectangle();
void hollowRectangle();

int main() {
  int choice;

  do {
    // Give options to the user.
    cout << "!!! Press 0 to Exit !!!\n";

    cout << "1. Print Half Pyramid of Stars\n";
    cout << "2. Print Full Pyramid of Stars\n";
    cout << "3. Print Rectangle of Stars\n";
    cout << "4. Print Hollow Rectangle of Stars\n";

    // Take input of choice
    cout << "Enter the Choice: ";
    cin >> choice;

    switch (choice) {
      // If he entered 0, exit.
    case 0:
      return 0;
      // Print half pyramid on entering 1.
    case 1:
      halfPyramid();
      break;
      // Print full pyramid on entering 2.
    case 2:
      fullPyramid();
      break;
      // Print rectangle on entering 3.
    case 3:
      rectangle();
      break;
      // Print hollow rectangle on entering 5.
    case 4:
      hollowRectangle();
      break;
      // If the choice doesn't match, print 
      // the following message.
    default:
      cout << "\n !!! Incorrect Choice !!!";
    }
  } while (choice != 0);

  return 0;
}

void halfPyramid() {
  int rows;
  // Getting the number of rows.
  cout << "Enter the Number of rows - ";
  cin >> rows;

  cout << "Triangle of " << rows << " using * -\n";

  // Main logic to print triangle. 
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j <= i; j++) {
      cout << "*  ";
    }
    cout << endl;
  }
}

void fullPyramid() {
  int rows;
  // Getting the number of rows.
  cout << "Enter the Number of rows - ";
  cin >> rows;

  cout << "Full Pyramid of " << rows << " using * -\n";

  // Main logic to print full pyramid. 
  for (int i = 0; i < rows; i++) {

    int spaces = rows - i;

    for (int j = 0; j < spaces; j++) {
      cout << "  ";
    }

    for (int j = 0; j < 2 * i + 1; j++) {
      cout << "* ";
    }

    cout << endl;

  }
}

void rectangle() {
  int rows, cols;
  // Getting dimensions of rectangle.
  cout << "Enter the number of rows in rectangle - ";
  cin >> rows;

  cout << "Enter the number of columns in rectangle - ";
  cin >> cols;

  cout << "Rectangle of dimensions " << rows << "*" << cols << endl;

  // Main logic to print Rectangle. 
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      cout << "* ";
    }
    cout << endl;
  }
}

void hollowRectangle() {
  int rows, cols;
  // Getting dimensions of the rectangle.
  cout << "Enter the number of rows in rectangle - ";
  cin >> rows;

  cout << "Enter the number of columns in rectangle - ";
  cin >> cols;

  cout << "Rectangle of dimensions " << rows << "*" << cols << endl;

  // Main logic to print hollow rectangle. 
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {

      // If the index is at the border, then print *. 
      if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1)
        cout << "* ";
      else
        cout << "  ";
    }
    cout << endl;
  }
}



// int main()
// {

  //(1st Method of printing full pyramid)
  // int row,col,n;

  // cout<<"Enter number of rows: ";
  // cin>>n;

  // for(row=1;row<=n;row++)
  // {
  //   for(col=1;col<=n-row;col++){
  //     cout<<"  ";
  //   }
  //   for(int l=1;l<=2*row-1;l++)
  //   {
  //     cout<<"*"<<" ";
  //   }
  //   cout<<endl;
  // }




  //(2nd Method to print a full pyramid of *)
  // int rows;
  // // Getting the number of rows.
  // cout << "Enter the Number of rows - ";
  // cin >> rows;

  // cout << "Full Pyramid of " << rows << " using * -\n";

  // // Main logic to print full pyramid. 
  // for (int i = 0; i < rows; i++) {

  //   int spaces = rows - i;

  //   for (int j = 0; j < spaces; j++) {
  //     cout << "  ";
  //   }

  //   for (int j = 0; j < 2 * i + 1; j++) {
  //     cout << "* ";
  //   }

  //   cout << endl;
  // }

  // int row,n,col;

  // cout<<"Enter the number of rows: ";
  // cin>>n;

  // for(row=1;row<=n;row++)
  // {
  //   for(col=1;col<=n-row;col++)
  //   {
  //     cout<<"  ";
  //   }
  //   for(col = 1; col<=row; col++)
  //   {
  //     cout<<col<<" ";
  //   }
  //   for(int col = row-1; col>=1; col--)
  //   {
  //     cout<<col<<" ";
  //   }
  //   cout<<endl;
  // } 


  // 1st method
  // int num;
  // cin>>num;

  // for(int i = num; i>= 1; i--)
  // {
  //   for(int j=num;j>i;j--)
  //   {
  //     cout<<" ";
  //   }
  //   for(int k=1;k<i*2;k++)
  //   {
  //     cout<<"* ";
  //   }
  //   cout<<endl;
  // }
  // return 0;

  //2nd method
  // int row,col,n;

  // cout<<"Enter the input: ";
  // cin>>n;

  // for(row=n;row>=1;row--)
  // {
  //   for(col=1; col<=n-row;col++)
  //   cout<<" ";

  //   for(col=1;col<=2*row-1;col++)
  //   cout<<"* ";

  //   cout<<endl;
  // }
  
  // int n;

  // for(int i = 0; i< n; i++){
  //   for(int j = 0; j < n-i; j++) {
  //     cout<<"* ";
  //   }

  //   for(int j =0;j<2*i;j++){
  //     cout<<" ";
  //   }

  //   for(int j = 0; j<n-i; j++){
  //     cout<<"* ";
  //   }
  //   cout<<endl;
  // }  

  

  
// }

