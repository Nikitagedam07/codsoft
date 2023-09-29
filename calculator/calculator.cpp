#include <iostream>
using namespace std;

int main() {
    int a, b, choice;

    cout << "********WELCOME**********" << endl;
    cout << "This is a calculator program" << endl;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "1. Addition" << endl << "2. Subtraction" << endl << "3. Multiplication" << endl << "4. Division" << endl << "5. Exit" << endl;
    cout << endl << "Please enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "1. Addition" << endl;
           
            cout << "Result: " << a + b << endl;
            break;

        case 2:
            cout << "2. Subtraction" << endl;
            
            cout << "Result: " << a - b << endl;
            break;

        case 3:
            cout << "3. Multiplication" << endl;
            
            cout << "Result: " << a * b << endl;
            break;

        case 4:
            cout << "4. Division" << endl;
            
            cout << "Result: " << a / b << endl;
            break;

        case 5:
            cout << "5. Exit" << endl;
            break;

        default:
            cout << "Invalid choice. Please select the right choice." << endl;
    }

    return 0;
}
