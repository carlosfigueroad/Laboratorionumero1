// Inclusión del archivo de cabecera correspondiente
#include "punto7.h"
// Inclusión de las bibliotecas para el manejo de conjuntos desordenados y entrada/salida estándar
#include <unordered_set>
#include <iostream>

// Definición de la función ejercicio7
void ejercicio7() {
    // Solicitud de una palabra al usuario
    std::cout << "Ingrese una palabra: ";
    std::string input;
    std::cin >> input;

    // Creación de un conjunto para almacenar caracteres únicos
    std::unordered_set<char> uniqueChars;
    // Creación de un string para almacenar el resultado
    std::string result;

    // Iteración sobre cada carácter en la cadena de entrada
    for (char c : input) {
        // Si el carácter no está en el conjunto, se añade al resultado y al conjunto
        if (uniqueChars.find(c) == uniqueChars.end()) {
            uniqueChars.insert(c);
            result.push_back(c);
        }
    }

    // Impresión de la palabra original y el resultado
    std::cout << "Original: " << input << ". Sin repetidos: " << result << '.' << std::endl;
}
