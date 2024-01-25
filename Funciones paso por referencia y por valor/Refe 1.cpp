#include <iostream>

using namespace std;

// Funciones por referencia para realizar operaciones aritm�ticas
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

    // Pedir al usuario que introduzca dos n�meros y la operaci�n deseada
    cout << "Ingrese el primer n�mero: ";
    cin >> num1;

    cout << "Ingrese la operaci�n (+, -, *, /): ";
    cin >> operation;

    cout << "Ingrese el segundo n�mero: ";
    cin >> num2;

    // Realizar la operaci�n seg�n la elecci�n del usuario
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
            cout << "Operaci�n no v�lida." << endl;
            return 1;
    }

    // Imprimir el resultado final
    cout << "Resultado final: " << result << endl;

    return 0;
}

