#include "punto18.h" // Incluye el archivo de cabecera "punto18.h"
#include <iostream> // Incluye la biblioteca iostream para entrada y salida de datos
#include <algorithm> // Incluye la biblioteca algorithm para usar la función next_permutation()

void ejercicio18() {
    int n; // Declara una variable para almacenar el número ingresado por el usuario
    std::cout << "Ingrese un numero: "; // Solicita al usuario que ingrese un número
    std::cin >> n; // Almacena el número ingresado por el usuario en la variable n

    std::string nums = "0123456789"; // Declara una cadena con los números del 0 al 9
    for (int i = 1; i < n; ++i) { // Recorre los números desde 1 hasta n - 1
        std::next_permutation(nums.begin(), nums.end()); // Genera la siguiente permutación lexicográfica de la cadena
    }

    std::cout << "La permutación numero " << n << " es: " << nums << std::endl; // Imprime el resultado
}
