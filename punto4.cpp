// Este archivo contiene la implementación de la función 'ejercicio4'.
// La función convierte una cadena que representa un número en un valor entero usando las funciones atoi y c_str().

#include "punto4.h"
#include <cstdlib>

int ejercicio4(std::string numeroComoCadena) {
    int numero = std::atoi(numeroComoCadena.c_str());  // Convierte la cadena en un entero usando atoi y c_str().
    return numero;  // Retorna el número convertido al llamador de la función.
}
