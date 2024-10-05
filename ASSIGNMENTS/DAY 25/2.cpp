#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;
    
    int arr[n];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++) {
        int maxIndex = 0;
        for (int j = 1; j < n - i; j++) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }
        if (maxIndex != n - i - 1) {
            int temp = arr[n - i - 1];
            arr[n - i - 1] = arr[maxIndex];
            arr[maxIndex] = temp;
        }
    }

    cout << "Sorted array in increasing order: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}