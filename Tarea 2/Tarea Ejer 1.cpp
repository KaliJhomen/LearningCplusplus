#include <iostream>
#include <vector>

int main() {
    // Crear un vector vac�o
    std::vector<int> numeros;

    // Solicitar al usuario que ingrese n�meros hasta que desee detenerse
    int numero;
    char continuar;

    do {
        std::cout << "Ingrese un n�mero: ";
        std::cin >> numero;

        // Agregar el n�mero al final del vector
        numeros.push_back(numero);

        // Preguntar al usuario si desea ingresar otro n�mero
        std::cout << "�Desea ingresar otro n�mero? (y/n): ";
        std::cin >> continuar;
    } while (continuar == 'y' || continuar == 'Y');

    // Imprimir los n�meros almacenados en el vector
    std::cout << "N�meros ingresados: ";
    for (int i : numeros) {
        std::cout << i << " ";
    }

    return 0;
}

