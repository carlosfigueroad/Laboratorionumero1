// Inclusión del archivo de cabecera correspondiente
#include "punto8.h"
// Inclusión de las bibliotecas para el manejo de entrada/salida estándar
#include <iostream>

// Definición de la función ejercicio8
void ejercicio8() {
    // Solicitud de una cadena de caracteres al usuario
    std::cout << "Ingrese una cadena de caracteres: ";
    std::string input;
    std::cin >> input;

    // Creación de dos strings para separar los caracteres y los números
    std::string chars, nums;

    // Iteración sobre cada carácter en la cadena de entrada
    for (char c : input) {
        // Si el carácter es un dígito, se añade a la cadena de números
        if (isdigit(c)) {
            nums += c;
        } else {
            // De lo contrario, se añade a la cadena de caracteres
            chars += c;
        }
    }

    // Impresión de la palabra original, la cadena de caracteres y la cadena de números
    std::cout << "Original: " << input << ". Texto: " << chars << ". Numero: " << nums << '.' << std::endl;
}
