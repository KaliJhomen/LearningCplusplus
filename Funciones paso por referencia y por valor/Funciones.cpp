#include <iostream>
#include <cmath>
using namespace std;

void add(int &result, int num2) {
    result += num2;
}

void subtract(int &result, int operand) {
    result -= operand;
}

void multiply(int &result, int operand) {
    result *= operand;
}

void divide(int &result, int operand) {
    if (operand != 0) {
        result /= operand;
    } else {
        cout << "Error: Division by zero" << endl;
    }
}

int main() {
    int result = 0;  // Initialize result to 0
    int num1, num2;
    char operation;

    cout << "Enter the operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    switch (operation) {
        case '+':
            add(result, num2);
            break;
        case '-':
            subtract(result, num2);
            break;
        case '*':
            multiply(result, num2);
            break;
        case '/':
            divide(result, num2);
            break;
        default:
            cout << "Invalid operation." << endl;
            return 1;
    }

    cout << "Final result: " << result << endl;

    return 0;
}


