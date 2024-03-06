#include "nuevopunto8.h"
#include <iostream>

int nuevoejercicio8(int a, int b, int c) {
    int sum = 0; // Inicializa la suma total

    // Itera desde 1 hasta c - 1
    for (int i = 1; i < c; i++) {
        // Verifica si i es múltiplo de a o b
        if (i % a == 0 || i % b == 0) {
            // Muestra el término con una "m" adelante
            std::cout << "m" << i;

            // Agrega un separador si no es el último término
            if (i < c - 1) {
                std::cout << " + ";
            }

            // Añade i a la suma total
            sum += i;
        }
    }

    // Muestra la suma total
    std::cout << " = " << sum << std::endl;

    return sum;
}
