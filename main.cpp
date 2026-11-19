
#include <iostream>
using namespace std;

int main() {
    int number;
    char choice;

    do {
        cout << "Enter a number: ";
        cin >> number;

        if (number % 2 == 0) {
            cout << number << " is an even number." << endl;
        }
        else {
            cout << number << " is an odd number." << endl;
        }

        cout << "Do you want to check another number? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Thank you for using the program!" << endl;

    return 0;
}
