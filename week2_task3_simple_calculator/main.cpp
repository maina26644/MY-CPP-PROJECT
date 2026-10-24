#include <iostream>
using namespace std;

int main() {
    double number1, number2, result;
    char operation;

    cout << "Enter first number: ";
    cin>>number1;


    cout << "Enter operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin>>number2;

    switch (operation) {
        case '+':
            result = number1 + number2;
            cout << "Result = " << result << "\n";
            break;
        case '-':
            result = number1 - number2;
            cout << "Result = " << result << "\n";
            break;
        case '*':
            result = number1 * number2;
            cout << "Result = " << result << "\n";
            break;
        case '/':
            if (number2 == 0)
                cout << "Error: Division by zero is not allowed.\n";
            else {
                result = number1 / number2;
                cout << "Result = " << result << "\n";
            }
            break;
        default:
            cout << "Invalid operator.\n";
    }

    return 0;
}
