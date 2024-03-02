#include <iostream>
#include "punto2.h"

void ejercicio2() { // Cambia 'ejercicio' por 'ejercicio2'
    int N;
    std::cout << "Por favor ingresa un numero: ";
    std::cin >> N;

    if (N % 2 == 0) {
        std::cout << N << " es par" << std::endl;
    } else {
        std::cout << N << " es impar" << std::endl;
    }
}

