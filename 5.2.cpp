#include <iostream>

int main() {
    int n;
    std::cout << "Ingresa un número positivo: ";
    std::cin >> n;

    // Imprimir la primera mitad de la salida
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << j;
        }
        std::cout << std::endl;
    }

    // Imprimir la segunda mitad de la salida
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            std::cout << j;
        }
        std::cout << std::endl;
    }

    return 0;
}
