#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Abrir archivo para lectura
    std::ifstream archivoEntrada("entrada.txt");
    if (!archivoEntrada) {
        std::cerr << "No se pudo abrir el archivo de entrada." << std::endl;
        return 1;
    }

    // Leer y mostrar el contenido del archivo
    std::string linea;
    while (std::getline(archivoEntrada, linea)) {
        std::cout << linea << std::endl;
    }
    archivoEntrada.close();

    // Abrir archivo para escritura
    std::ofstream archivoSalida("salida.txt", std::ios::app);
    if (!archivoSalida) {
        std::cerr << "No se pudo abrir el archivo de salida." << std::endl;
        return 1;
    }

    // Escribir una línea adicional en el archivo
    archivoSalida << "Línea adicional" << std::endl;
    archivoSalida.close();

    return 0;
}