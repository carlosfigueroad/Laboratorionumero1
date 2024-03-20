// Inclusión del archivo de cabecera correspondiente
#include "punto10.h"
// Inclusión de las bibliotecas para el manejo de entrada/salida estándar y mapas
#include <iostream>
#include <map>

// Definición de la función ejercicio10
void ejercicio10() {
    // Creación de un mapa para almacenar los caracteres romanos y su equivalente arábigo
    std::map<char, int> roman = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

    // Solicitud de un número en el sistema romano al usuario
    std::cout << "Ingrese un numero en el sistema romano: ";
    std::string input;
    std::cin >> input;

    // Inicialización de la variable para almacenar el resultado
    int result = 0;

    // Iteración sobre cada carácter en la cadena de entrada
    for (size_t i = 0; i < input.length(); ++i) {
        // Si el carácter actual es menor que el siguiente, se resta su valor del total
        if (roman[input[i]] < roman[input[i + 1]]) {
            result -= roman[input[i]];
        } else {
            // De lo contrario, se suma su valor al total
            result += roman[input[i]];
        }
    }

    // Impresión del número ingresado y su equivalente arábigo
    std::cout << "El número ingresado fue: " << input << " Que corresponde a: " << result << '.' << std::endl;
}
