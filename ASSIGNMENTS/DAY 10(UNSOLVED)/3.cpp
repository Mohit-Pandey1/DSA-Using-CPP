#include <iostream>
using namespace std;

void printPattern(int n) {
    for (int i = 1; i <= n; i++) {

        for (int j = 0; j < n - i; j++) {
            cout << "  "; 
        }
        
        for (int j = 5; j > 5 - i; j--) {
            cout << j << " "; 
        }
        

        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n; 
    printPattern(n); 
    return 0;
}