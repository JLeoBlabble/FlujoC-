#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char* argv[]) {
    // Verificar que se hayan pasado argumentos
    if (argc < 2) {
        std::cerr << "No se pasaron argumentos." << std::endl;
        return 1;
    }

    // Concatenar todos los argumentos en una sola cadena
    std::string cadena;
    for (int i = 1; i < argc; ++i) {
        cadena += argv[i];
        if (i < argc - 1) {
            cadena += " ";
        }
    }

    // Escribir la cadena resultante en un archivo de texto
    std::ofstream archivoSalida("resultado.txt");
    if (!archivoSalida) {
        std::cerr << "No se pudo abrir el archivo de salida." << std::endl;
        return 1;
    }
    archivoSalida << cadena << std::endl;
    archivoSalida.close();

    // Mostrar mensaje de confirmación
    std::cout << "Cadena escrita en resultado.txt" << std::endl;

    return 0;
}