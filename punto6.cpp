#include "punto6.h"   // Incluye el archivo de cabecera con la declaración de ejercicio6
#include <iostream>    // Incluye la biblioteca estándar de entrada/salida
#include <string>      // Incluye la biblioteca de manejo de cadenas

void ejercicio6() {  // Definición de la función ejercicio6.
    std::string cadena;  // Declaración de la variable cadena de tipo string.

    std::cout << "Ingresa una cadena de texto en minusculas: ";  // Solicitud de la cadena de texto.
    std::getline(std::cin, cadena);  // Lectura de la cadena de texto ingresada por el usuario.

    // Se recorre cada carácter de la cadena.
    for (char &c : cadena) {
        c = std::toupper(c);  // Se convierte el carácter a mayúscula si es una letra minúscula.
    }

    std::cout << "En mayuscula: " << cadena << '\n';  // Se muestra la cadena convertida a mayúsculas.
}
