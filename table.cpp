#include <iostream>
using namespace std;

int main() {
    int num, choice;

    cout << "Enter a number to generate its table: ";
    cin >> num;

    cout << "\nChoose table order:\n";
    cout << "1. Ascending Order\n";
    cout << "2. Descending Order\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    cout << endl;

    if (choice == 1) {
        cout << "Table of " << num << " in Ascending Order:\n\n";
        for (int i = 1; i <= 10; i++)
         {
            cout << num << "  x  " << i << "  =  " << num * i << endl;
        }
    }
    else if (choice == 2) {

        cout << "Table of " << num << " in Descending Order:\n\n";
        for (int i = 10; i >= 1; i--) 
        {
            cout << num << "  x  " << i << "  =  " << num * i <<endl ;
        }
    }
    else {
        cout << "Invalid choice!";
    }

    return 0;
}
