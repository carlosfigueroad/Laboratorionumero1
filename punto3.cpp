#include "punto3.h"  // Inclusión del archivo de cabecera punto3.h.
#include <iostream>  // Inclusión de la biblioteca de entrada y salida.
#include <string>    // Inclusión de la biblioteca de manejo de cadenas.

void ejercicio3() {  // Definición de la función ejercicio3.
    std::string cadena1;  // Declaración de la variable cadena1.
    std::string cadena2;  // Declaración de la variable cadena2.
    std::string descartar;  // Declaración de una cadena para descartar la entrada residual.

    std::getline(std::cin, descartar);  // Descartar la entrada residual.

    std::cout << "Ingresa la primera cadena: ";  // Solicitud de la primera cadena.
    std::getline(std::cin, cadena1);             // Lectura de la primera cadena.

    std::cout << "Ingresa la segunda cadena: ";  // Solicitud de la segunda cadena.
    std::getline(std::cin, cadena2);             // Lectura de la segunda cadena.

    // Comparación de las cadenas cadena1 y cadena2.
    if (cadena1 == cadena2) {
        std::cout << "Las cadenas son iguales.\n";  // Mensaje si las cadenas son iguales.
    } else {
        std::cout << "Las cadenas son diferentes.\n";  // Mensaje si las cadenas son diferentes.
    }
}
