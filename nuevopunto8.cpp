// nuevopunto8.cpp

#include "nuevopunto8.h"
#include <iostream>

int calcularSumaMultiplos(int a, int b, int c) {
    int sum = 0;
    std::cout << "respuesta: ";
    for (int i = 1; i < c; i++) {
        if (i % a == 0 || i % b == 0) {
            std::cout << "m" << i;
            if (i < c - 1) {
                std::cout << " + ";  // Separador entre términos
            }
            sum += i;  // Añade i a la suma
        }
    }
    std::cout << " = " << std::endl;  // Imprime la suma total
    return sum;
}
