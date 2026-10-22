#include <iostream>
using namespace std;

int main() {
    float result, num;
    char op;
    int choice;
    float ans = 0;       // stores the last answer
    bool hasAns = false;  // do we have a previous answer?
    bool running = true;

    while (running) {
        // ---- Show Menu ----
        cout << "============================" << endl;
        cout << "     Calculator V3          " << endl;
        cout << "============================" << endl;
        cout << "1. New Calculation" << endl;
        if (hasAns) {
            cout << "2. Continue from ANS (" << ans << ")" << endl;
        }
        cout << "3. AC (All Clear)" << endl;
        cout << "0. Exit" << endl;
        cout << "============================" << endl;
        cout << "Choose: ";
        cin >> choice;

        // ---- Fix: handle letter/invalid input ----
        // cin.fail() is true when the user types a letter instead of a number
        if (cin.fail()) {
            cin.clear();              // reset the error flag
            cin.ignore(1000, '\n');   // throw away the bad input
            cout << "Please enter a valid number!" << endl << endl;
            continue;  // jump back to the top of the while loop
        }

        // ---- AC (All Clear) ----
        if (choice == 3) {
            system("cls");
            ans = 0;
            hasAns = false;
            cout << "All cleared!" << endl << endl;
            continue;
        }

        // ---- Exit ----
        if (choice == 0) {
            cout << endl;
            cout << "Goodbye! Thanks for using Calculator V3" << endl;
            cout << "Press Enter to close...";
            cin.ignore();
            cin.get();   // waits for the user to press Enter
            running = false;
            continue;
        }

        // ---- New Calculation ----
        if (choice == 1) {
            cout << "Enter first number: ";
            cin >> num;
            if (cin.fail()) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Invalid number!" << endl << endl;
                continue;
            }
            result = num;

        // ---- Continue from ANS ----
        } else if (choice == 2 && hasAns) {
            result = ans;
            cout << "Starting from ANS = " << result << endl;

        } else {
            cout << "Invalid choice! Please try again." << endl << endl;
            continue;
        }

        // ---- Chain Operations Loop ----
        // This lets you do: 5 + 3 * 2 - 1 = (left to right)
        // Keep asking for operator + number until user types =
        while (true) {
            cout << "Enter operator (+, -, *, /) or = to get result: ";
            cin >> op;

            // If user types = we are done
            if (op == '=') {
                break;
            }

            // Ask for the next number
            cout << "Enter next number: ";
            cin >> num;
            if (cin.fail()) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Invalid number! Try again." << endl;
                continue;  // ask for operator again
            }

            // Do the math based on the operator
            switch (op) {
                case '+':
                    result = result + num;
                    break;
                case '-':
                    result = result - num;
                    break;
                case '*':
                    result = result * num;
                    break;
                case '/':
                    if (num == 0) {
                        cout << "Error: Cannot divide by zero!" << endl;
                    } else {
                        result = result / num;
                    }
                    break;
                default:
                    cout << "Unknown operator '" << op << "'! Use +, -, *, / or =" << endl;
                    continue;  // ask again
            }

            // Show the running total so far
            cout << "= " << result << endl;
        }

        // ---- Show Final Result & Save as ANS ----
        cout << ">>> Result: " << result << " <<<" << endl;
        ans = result;
        hasAns = true;
        cout << endl;
    }

    return 0;
}
