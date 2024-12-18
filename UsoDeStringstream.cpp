#include <iostream>
#include <sstream>
#include <string>

int main() {
    // Leer una línea completa de texto
    std::cout << "Ingrese una línea de texto: ";
    std::string linea;
    std::getline(std::cin, linea);

    // Almacenar la línea en un stringstream
    std::stringstream ss(linea);

    // Extraer y mostrar cada palabra en una línea diferente
    std::string palabra;
    while (ss >> palabra) {
        std::cout << palabra << std::endl;
    }

    return 0;
}