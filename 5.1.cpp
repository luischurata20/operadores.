#include <iostream>

int main() {
    int n;
    std::cout << "Ingresa un número positivo: ";
    std::cin >> n;

    int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += i;
    }

    std::cout << "La suma de los números del 0-1 total " << n << " es igual: " << suma << std::endl;

    return 0;
}
