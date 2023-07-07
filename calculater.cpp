#include <iostream>

using namespace std;

int main() {
    float num1, num2, result;
    char op;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter the second number: ";
    cin >> num2;

    switch (op) {
        case '+':
            result = num1 + num2;
            cout << "The sum is: " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "The difference is: " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "The product is: " << result << endl;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << "The quotient is: " << result << endl;
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
