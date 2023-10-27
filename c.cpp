#include <iostream>
using namespace std;

int main() {
    char operation;
    double num1, num2, result;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (operation) {
        case '+':
            result = num1 + num2;
            cout << "Sum: " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Difference: " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Product: " << result << endl;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Quotient: " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Invalid operator." << endl;
            break;
    }

    return 0;
}