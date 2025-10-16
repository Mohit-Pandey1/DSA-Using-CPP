#include <iostream>
#include <cmath>
using namespace std;

void menu(){
    cout << "\n------- MINI CALCULATOR -------\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Modulus\n";
    cout << "6. Power (Recursive)\n";
    cout << "7. Exit\n";
    cout << "Enter your choice: ";
}

int add(int a, int b){
    return a +b;
}

int sub(int a, int b){
    return a - b;
}

int multiplication(int a, int b){
    return a * b;
}

int division(int a, int b){
    if(b == 0){
        cout << "Error: Division by zero is not allowed\n";
    }

    return (float)a / b;
}

int mod(int a, int b){
    if(b == 0){
        cout << "Error: Modulus by zero nit allowed\n";
        return 0;
    }

    return a % b;
}

int power(int base, int exp){
    if(exp == 0)
    return 1;
    return base * power(base , exp - 1);
}

int main(){
    int choice;
    int a , b;

    do {
        menu();
        cin>>choice;

        if(choice >= 1 && choice <= 6){
            cout << "Enter two numbers: ";
            cin >> a >> b;
        }

        switch(choice){
            case 1: 
                cout << "Result: " << add(a,b)<< endl;
                break;
            
                case 2:
                    cout << "Result: " << sub(a, b) << endl;
                    break;
                
                case 3:
                    cout << "Result: " << multiplication(a , b) << endl;
                    break;
                
                case 4: 
                    cout << "Result: " << division(a, b) << endl;
                    break;

                case 5: 
                    cout << "Result: " << mod(a, b) << endl;
                    break;

                case 6: 
                    cout << "Result: " << power(a, b) << endl;
                    break;

                case 7: 
                    cout << "Exiting calculator..." << endl;
                    break;

                default:
                    cout << "Invalid choice! Try again\n";
        }
    } while(choice != 7);

    return 0;
}