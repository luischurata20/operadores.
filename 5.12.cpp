#include <iostream>

int main() {
    int cantidadMaxima;
    std::cout << "Ingrese la cantidad mayor y máxima: ";
    std::cin >> cantidadMaxima;

    int n = 1;
    int suma = 0;

    while (suma <= cantidadMaxima) {
        suma += (n * n - n - 2);
        n++;
    }

    std::cout << "El número natural más pequeño 'n' es igual: " << (n - 1) << std::endl;

    return 0;
}
