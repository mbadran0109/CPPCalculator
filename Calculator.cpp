#include <iostream>
using namespace std;

int main() {
    float a, b;

    cout << "===== Calculator V1 =====" << endl;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    cout << endl;
    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << a << " * " << b << " = " << a * b << endl;
    cout << a << " / " << b << " = " << a / b << endl;

    cin.ignore();
    cin.get();

    return 0;
}
