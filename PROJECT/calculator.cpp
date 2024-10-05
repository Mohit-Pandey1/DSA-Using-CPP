#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

long long factorial(int n) {
    if (n < 0) return -1;
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

void showMenu() {
    cout << "     Calculator    " << endl;
    cout << "===================" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;
    cout << "5. Modulus (%)" << endl;
    cout << "6. Power (^)" << endl;
    cout << "7. Square Root (√)" << endl;
    cout << "8. Factorial (!)" << endl;
    cout << "9. Exit" << endl;
    cout << "Choose an operation: ";
}

int main() {
    int choice;
    double num1, num2, result;

    while (true) {
        showMenu();
        cin >> choice;

        
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a valid choice." << endl;
            continue;
        }

        //
        if (choice == 9) {
            cout << "Exiting..." << endl;
            break; 
        }

        if (choice == 7 || choice == 8) {
            cout << "Enter the number: ";
            cin >> num1;

            if (choice == 7) {
                if (num1 < 0) {
                    cout << "Error: Square root of negative numbers is not defined in real numbers." << endl;
                } else {
                    result = sqrt(num1);
                    cout << "Result: √" << num1 << " = " << result << endl;
                }
            } else if (choice == 8) {
                if (num1 < 0 || floor(num1) != num1) {
                    cout << "Error: Factorial is only defined for non-negative integers." << endl;
                } else {
                    result = factorial(static_cast<int>(num1));
                    cout << "Result: " << num1 << "! = " << result << endl;
                }
            }

            continue;
        }

        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;

        switch (choice) {
            case 1:
                result = num1 + num2;
                cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
                break;
            case 2:
                result = num1 - num2;
                cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
                break;
            case 3:
                result = num1 * num2;
                cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
                break;
            case 4:
                if (num2 == 0) {
                    cout << "Error: Division by zero is not allowed." << endl;
                } else {
                    result = num1 / num2;
                    cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
                }
                break;
            case 5:
                if (floor(num1) == num1 && floor(num2) == num2) {
                    result = static_cast<int>(num1) % static_cast<int>(num2);
                    cout << "Result: " << num1 << " % " << num2 << " = " << result << endl;
                } else {
                    cout << "Error: Modulus operation requires integer values." << endl;
                }
                break;
            case 6:
                result = pow(num1, num2);
                cout << "Result: " << num1 << " ^ " << num2 << " = " << result << endl;
                break;
            default:
                cout << "Invalid choice. Please select a valid option." << endl;
                break;
        }

        char again;
        cout << "Do you want to perform another operation? (y/n): ";
        cin >> again;
        if (again != 'y' && again != 'Y') {
            cout << "Exiting..." << endl;
            break;
        }
    }

    return 0;
}
