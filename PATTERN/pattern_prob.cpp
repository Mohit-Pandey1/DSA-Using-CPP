#include <iostream>
using namespace std;

int main()
{

//LEVEL 1 QUESTIONS

  //printing "*" 
  // int row, col;

  // for(row=1; row <=5; row +=1)
  // {
  //   for(col=1;col<=5;col+=1)
  //   {
  //     cout<<"* ";
  //   }
  //   cout<<endl;
  // }

  //print number "10" pattern
  // int row,col;
  // for(row=1;row<=4;row+=1)
  // {
  //   for(col=1;col<=5;col+=1)
  //   {
  //     cout<<10<<" ";
  //   }
  //   cout<<endl;
  // }


   //Pattern of number "1,2,3,4,5"(row-wise)
  // int row,col;
  
  // for(row=1;row<=5;row+=1)
  // {
  //   for(col=1;col<=5;col+=1)
  //   {
  //     cout<<row<<" ";
  //   }
  //   cout<<endl;
  // }


  //Pattern of number "1,2,3,4,5"(column-wise)
  // int row,col;
  // for(row=1;row<=5;row+=1)
  // {
  //   for(col=1;col<=5;col+=1)
  //   {
  //     cout<<col<<" ";
  //   }
  //   cout<<endl;
  // }


  //print numbers from 1-5 in descending order

//  int row,col;
//  for(row=1;row<=5;row+=1)
//  {
//   for (col=5;col>=1;col-=1)
//   {
//     cout<<col<<" ";
//   }
//   cout<<endl;
//  }  

  //print numbers in ascending order(square of numbers)
  // int row,col;
  // for(row=1;row<=5;row+=1)
  // {
  //   for(col=1;col<=5;col+=1)
  //   {
  //     cout<<col*col<<" ";
  //   }
  //   cout<<endl;
  // }

  // print numbers in ascending order(cube of numbers)

  // int row,col;
  // for(row=1;row<=5;row+=1)
  // {
  //   for (col=1;col<=5;col+=1)
  //   {
  //     cout<<col*col*col<<" ";
  //   }
  //   cout<<endl;
  // }


  //print alphabets
  // int row,col;
  // for(row=1;row<=5;row+=1)
  // {
  //   char name='a'+(row-1);
  //   for(col=1;col<=5;col+=1)
  //   {
  //     cout<<name<<" ";
  //   }
  //   cout<<endl;
  // } 

  //printing alphabets in ascending order
  // int row,col;

  // for(row=1;row<=5;row+=1)
  // {
  //   for(char col='a';col<='e';col+=1)
  //   {
  //     cout<<col<<" ";
  //   }
  //   cout<<endl;
  // }

  //number pattern printing
  // int row,col,count= 1;

  // for(row=1;row<=5;row+=1)
  // {
  //   for(col=1;col<=5;col+=1)
  //   {
  //     cout<<count<<" ";
  //     count += 1;
  //   }
  //   cout<<endl;
  // }
  


//LEVEL 2 QUESTIONS


//print right handed triangle
  // int row,col;

  // for(row=1;row<=5;row+=1)
  // {
  //   for(col=1;col<=row;col+=1)
  //   {
  //     cout<<"* ";
  //   }
  //   cout<<endl;
  // }

//print numbers in ascending order

  // int row,col;

  // for(row=1;row<=5;row+=1)
  // {
  //   for(col=1;col<=row;col+=1)
  //   {
  //     cout<<col<<" ";
  //   }
  //   cout<<endl;
  // }


  //number pattern
  // int row,col;

  // for(row=1;row<=5;row+=1)
  // {
  //   for(col=1;col<=row;col+=1)
  //   {
  //     cout<<row<<" ";
  //   }
  //   cout<<endl;
  // }

  //reverse number pattern
  // int row,col;

  // for(row=1;row<=5;row+=1)
  // {
  //   for(col=row;col>=1;col-=1)
  //   {
  //     cout<<col<<" ";
  //   }
  //   cout<<endl;
  // }

//alphabet pattern

  // int row,col;

  // for(row=1;row<=5;row += 1)
  // {
  //   char name = 'a' + row-1;
  //   for(col=1;col<=row;col+=1)
  //   {
  //     cout<<name<<" ";
  //   }
  //   cout<<endl;
  // }

//star pattern descending order
  // int row,col;

  // for(row=1;row<=5;row+=1)
  // {
  //   for(col=1;col<=5-(row-1);col+=1)
  //   {
  //     cout<<"* ";
  //   }
  //   cout<<endl;
  // }

  //alternate method
  // for(row=5;row>=1;row-=1)
  // {
  //   for(col=1;col<=row;col+=1)
  //   {
  //     cout<<"* ";
  //   }
  //   cout<<endl;
  // }

  //number pattern descending order
  // for(row=1;row<=5;row+=1)
  // {
  //   for(col=1;col<=5-(row-1);col+=1)
  //   {
  //     cout<<col<<" ";
  //   }
  //   cout<<endl;
  // }

  // for(row=1;row<=5;row+=1)
  // {
  //   for(col=5;col>=5-row+1;col-=1)
  //   {
  //     cout<<col<<" ";
  //   }
  //   cout<<endl;
  // }



  //LEVEL 3 QUESTIONS



  // for(row=1; row<=5;row+=1)
  // {
  //   for(col=1;col<=5-row;col+=1)
  //   {
  //     cout<<" ";
  //   }
  //   for(col=1;col<=row;col+=1)
  //   {
  //     cout<<"*";
  //   }
  //   cout<<endl;
  // }


  // for(row=1;row<=4;row+=1)
  // {
  //   for(col=1;col<=4-row;col+=1)
  //   {
  //     cout<<" ";
  //   }
  //   for(col=1;col<=row;col+=1)
  //   {
  //     cout<<row<<" ";
  //   }
  //   cout<<endl;
  // }


  // int n;
  // cout<<"Enter the input: ";
  // cin>>n;

  // for(int row=1;row<=n;row+=1)
  // {
  //   for(int col=1;col<=n-row;col+=1) 
  //   cout<<" ";

  //   for(int col=1;col<=row;col+=1)
  //   cout<<col<<" ";
  // }

  
  // cout<<endl;
  // }          

  // int n;
  // cout<<"ENTER THE NUMBER OF ROWS: ";
  // cin>>n;

  // cout<<"Traingle of " << row << "using chahracters -\n ";

  // for(row=0;row<n;row++)
  // {
  //   for(col=0;col < row; col++)
  //   {
  //     cout<< (char)('A' + col) << " ";
  //   }
  //   cout<<endl;
  // }
  // return 0;
  

  // int length,breadth;

  // cout<<"Enter the number of rows in rectangle : ";
  // cin>>length;

  // cout<<"Enter the number of columns in rectangle : ";
  // cin>>breadth;

  // cout<<"Dimensions of rectangle are: "<< length << "*" << breadth << endl;

  // for(row=0; row<length;row++)
  // {
  //   for(col=0;col<breadth;col++)
  //   {
  //     cout<<"* ";
  //   }
  //   cout<<endl;
  // }
  // return 0;

  // int n, count = 1;

  // cout<<"Enter the Number of rows - ";
  // cin>>n;

  // cout<<"Floyd's Traingle of  " << n << "rows "<< endl;

  // for(row= 0; row<n; row++)
  // {
  //   for(col=0;col<=n;col++)
  //   {
  //     cout << (count++) << " ";
  //   }
  //   cout<<endl;
  // }
  // return 0;

  // int row,col;
  // char name;

  // for (row=1;row<=5;row++)
  // {
  //   // Space printing 
  //   for(col=1;col<=5-row;col++)
  //   cout<<" ";

  //   //CHar printing 
  //   for(name = 'A'; name <= 'A'+row-1;name++)
  //   cout<<name;

  //   cout<<endl;
  // }

  // int row,col;

  // for(row=1;row<=5-col;row++)
  // {
  //    cout<<" ";
  //   for(col=1;col<=5;col++)
  //   {
  //    cout<<row<<endl;
  //   }
    
  // }

  
}