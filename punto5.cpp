#include "punto5.h" // Incluye el archivo de cabecera "punto5.h"
#include <iostream> // Incluye la biblioteca iostream para entrada y salida de datos
#include <string> // Incluye la biblioteca string para usar la función to_string()

void convertir(int num, std::string& str) { // Define una función que convierte un número entero a una cadena de caracteres
    str = std::to_string(num); // Convierte el número entero a una cadena de caracteres y la almacena en la variable str
}

void ejercicio5() {
    int num; // Declara una variable para almacenar el número ingresado por el usuario
    std::cout << "Ingrese un número entero: "; // Solicita al usuario que ingrese un número entero
    std::cin >> num; // Almacena el número entero ingresado por el usuario en la variable num

    std::string str; // Declara una variable para almacenar la cadena de caracteres
    convertir(num, str); // Llama a la función convertir() para convertir el número entero a una cadena de caracteres

    std::cout << "La cadena de caracteres es: " << str << std::endl; // Imprime la cadena de caracteres
}
