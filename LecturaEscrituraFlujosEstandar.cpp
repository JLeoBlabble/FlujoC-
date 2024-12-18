#include <iostream>

int main() {
    std::cout << "Ingrese un número: ";
    int numero;
    std::cin >> numero;

    // Verificar que la entrada sea válida
    if (std::cin.fail()) {
        std::cerr << "Entrada no válida." << std::endl;
        return 1;
    }

    std::cout << "Número ingresado: " << numero << std::endl;

    return 0;
}