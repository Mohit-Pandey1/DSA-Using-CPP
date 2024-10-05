#include <iostream>
using namespace std;

void printPattern(int n) {
    for (int i = 1; i <= n; i++) {

        char letter = char(65 + i - 1);
        

        for (int j = 0; j < n - i; j++) {
            cout << "  "; 
        }
        

        for (int j = 0; j < i; j++) {
            cout << letter << " "; 
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