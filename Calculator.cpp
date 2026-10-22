#include <iostream>
using namespace std;

int main() {
    float a, b, result;
    int choice;
    bool running = true;

    while (running) {
        cout << "============================" << endl;
        cout << "     Calculator V2          " << endl;
        cout << "============================" << endl;
        cout << "1. Add      (+)" << endl;
        cout << "2. Subtract (-)" << endl;
        cout << "3. Multiply (*)" << endl;
        cout << "4. Divide   (/)" << endl;
        cout << "5. AC (All Clear)" << endl;
        cout << "0. Exit" << endl;
        cout << "============================" << endl;
        cout << "Choose an operation: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter first number: ";
                cin >> a;
                cout << "Enter second number: ";
                cin >> b;
                result = a + b;
                cout << a << " + " << b << " = " << result << endl;
                break;

            case 2:
                cout << "Enter first number: ";
                cin >> a;
                cout << "Enter second number: ";
                cin >> b;
                result = a - b;
                cout << a << " - " << b << " = " << result << endl;
                break;

            case 3:
                cout << "Enter first number: ";
                cin >> a;
                cout << "Enter second number: ";
                cin >> b;
                result = a * b;
                cout << a << " * " << b << " = " << result << endl;
                break;

            case 4:
                cout << "Enter first number: ";
                cin >> a;
                cout << "Enter second number: ";
                cin >> b;
                if (b == 0) {
                    cout << "Error: Cannot divide by zero!" << endl;
                } else {
                    result = a / b;
                    cout << a << " / " << b << " = " << result << endl;
                }
                break;

            case 5:
                system("cls");
                cout << "Screen cleared!" << endl;
                break;

            case 0:
                cout << "Goodbye!" << endl;
                running = false;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
                break;
        }

        cout << endl;
    }

    return 0;
}
