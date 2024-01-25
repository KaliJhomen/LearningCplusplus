#include <iostream>
#include <vector>

int main() {
    // Crear un vector vacío
    std::vector<int> numeros;

    // Solicitar al usuario que ingrese números hasta que desee detenerse
    int numero;
    char continuar;

    do {
        std::cout << "Ingrese un número: ";
        std::cin >> numero;

        // Agregar el número al final del vector
        numeros.push_back(numero);

        // Preguntar al usuario si desea ingresar otro número
        std::cout << "¿Desea ingresar otro número? (y/n): ";
        std::cin >> continuar;
    } while (continuar == 'y' || continuar == 'Y');

    // Imprimir los números almacenados en el vector
    std::cout << "Números ingresados: ";
    for (int i : numeros) {
        std::cout << i << " ";
    }

    return 0;
}

