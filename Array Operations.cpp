/* 
PROBLEM STATEMENT:
Design a program with a template for sorting the accepted array and displaying it 
using integer or float type data. Implement any sorting type using Generic Programming.
*/

#include <iostream>
using namespace std;

template <class T>
void sort(T a[], int n) {
    // Selection Sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                T temp;
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // Display Sorted Array
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}

int main() {
    int choice;

    do {
        cout << "1. Integer array" << endl;
        cout << "2. Floating array" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter choice code: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                // Integer array
                int n;
                cout << "Enter number of elements in the integer array: ";
                cin >> n;
                int a[n];

                cout << "Enter " << n << " elements of integer array: " << endl;
                for (int i = 0; i < n; i++) {
                    cin >> a[i];
                }

                cout << "Sorting of Integer array: ";
                sort(a, n);
                cout << endl;
                break;
            }

            case 2: {
                // Floating array
                int m;
                cout << "Enter number of elements in the floating array: ";
                cin >> m;
                float b[m];

                cout << "Enter " << m << " elements of floating array: " << endl;
                for (int i = 0; i < m; i++) {
                    cin >> b[i];
                }

                cout << "Sorting of Floating array: ";
                sort(b, m);
                cout << endl;
                break;
            }

            case 3: {
                cout << "Exiting the program..." << endl;
                break;
            }

            default: {
                cout << "Invalid choice!" << endl;
            }
        }

    } while (choice != 3);

    return 0;
}
