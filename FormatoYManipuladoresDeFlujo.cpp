#include <iostream>
#include <iomanip>

int main() {
    // Leer un número con punto decimal
    std::cout << "Ingrese un número decimal: ";
    double numero;
    std::cin >> numero;

    // Verificar que la entrada sea válida
    if (std::cin.fail()) {
        std::cerr << "Entrada no válida." << std::endl;
        return 1;
    }

    // Mostrar el número con exactamente dos decimales
    std::cout << std::fixed << std::setprecision(2) << "Número ingresado: " << numero << std::endl;

    return 0;
}