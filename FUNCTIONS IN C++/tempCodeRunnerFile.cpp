// #include <iostream>
// using namespace std;

// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
//     float temperature = 25.5;
//     cout<<"Temperature in celsius = "<<temperature<<endl;
    
//     cout<<"Temperature in Kelvin = "<<temperature+273<<endl;
// }

// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
//     int grade;
//     cout<<"Enter the number: ";
//     cin>> grade;
    

//     if(grade>=95)
//     {
//         cout<<"A";
//     }
//     else if(grade>=70)
//     {
//         cout<<"B";
//     }
//     else if(grade>=40)
//     {
//         cout<<"C";
//     }
//     else
//         cout<<"F";
// }

#include <iostream>
using namespace std;

int main() {

    int marks;
    cout << "Enter the marks: ";
    cin >> marks;
    if (marks > 90) {
        cout << "A\n";
    }
    else if (marks > 70) {
        cout << "B\n";
    }
    else if (marks >= 40) {
        cout << "C\n";
    }
    else {
        cout << "F\n";
    }

    return 0;
}

