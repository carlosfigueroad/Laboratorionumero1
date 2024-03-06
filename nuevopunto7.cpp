#include "nuevopunto7.h"
#include <iostream>

// Define la función nuevoejercicio7.
void nuevoejercicio7() {
    int n;
    std::cout << "Ingrese un numero: ";
    std::cin >> n;

    int a = 1, b = 1, suma = 0, temp;

    // Calcula la suma de los números pares en la serie de Fibonacci menores a n.
    while (b < n) {
        if (b % 2 == 0) {
            suma += b;
        }
        temp = a + b;
        a = b;
        b = temp;
    }

    // Muestra el resultado.
    std::cout << "El resultado de la suma es: " << suma << std::endl;
}
