// Inclusión del archivo de cabecera correspondiente
#include "punto9.h"
// Inclusión de las bibliotecas para el manejo de entrada/salida estándar
#include <iostream>
#include <vector>

// Definición de la función ejercicio9
void ejercicio9() {
    // Solicitud del número n y la cadena de caracteres numéricos al usuario
    std::cout << "Ingrese el numero n y la cadena de caracteres numericos: ";
    int n;
    std::string input;
    std::cin >> n >> input;

    // Añadir ceros a la izquierda si es necesario para completar el primer número de n cifras
    while (input.length() % n != 0) {
        input = "0" + input;
    }

    // Creación de un vector para almacenar los números de n cifras
    std::vector<int> numbers;
    int sum = 0;

    // Separación de la cadena en números de n cifras y suma de los mismos
    for (size_t i = 0; i < input.length(); i += n) {
        // Extracción de la subcadena de n cifras
        std::string part = input.substr(i, n);
        // Conversión de la subcadena a número entero y adición al vector
        int number = std::stoi(part);
        numbers.push_back(number);
        // Suma acumulativa de los números
        sum += number;
    }

    // Impresión de la cadena original y el resultado de la suma
    std::cout << "Original: " << input << ". Suma: " << sum << '.' << std::endl;
}
