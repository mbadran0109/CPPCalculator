#include <iostream>
using namespace std;
int x,y;
float z;
int main() {
    cout << "Enter the first number: ";
    cin >> x ;
    cout << "Enter the second number: ";
    cin >> y ;
    z = x + y ;
    cout << "The sum is: " << (int)z << endl;
    z = (float)x / y ;
    cout << "The division is: " << z << endl;
    cout << "The product is: " << x * y << endl;
    cin.ignore();
    cin.get();
    
    return 0;
}