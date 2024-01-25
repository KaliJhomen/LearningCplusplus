#include <iostream>

using namespace std;

// Funciones por referencia para realizar operaciones aritméticas
void add(int &result, int operand) {
    result += operand;
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
        cout << "Error: No es posible dividir por cero." << endl;
    }
}

int main() {
    int result = 0;
    int num1, num2;
    char operation;

    cout << "Calculadora simple" << endl;

    // Pedir al usuario que introduzca dos números y la operación deseada
    cout << "Ingrese el primer número: ";
    cin >> num1;

    cout << "Ingrese la operación (+, -, *, /): ";
    cin >> operation;

    cout << "Ingrese el segundo número: ";
    cin >> num2;

    // Realizar la operación según la elección del usuario
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
            cout << "Operación no válida." << endl;
            return 1;
    }

    // Imprimir el resultado final
    cout << "Resultado final: " << result << endl;

    return 0;
}

