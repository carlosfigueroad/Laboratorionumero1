#include <iostream>
#include <vector>
#include "Punto1.h"

void ejercicio1() {
    int cantidad;
    std::cout << "Ingrese la cantidad de dinero: ";
    std::cin >> cantidad;

    std::vector<int> denominaciones = {50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50};
    std::vector<int> resultado(denominaciones.size(), 0);

    for (size_t i = 0; i < denominaciones.size(); ++i) {
        resultado[i] = cantidad / denominaciones[i];
        cantidad %= denominaciones[i];
    }

    for (size_t i = 0; i < denominaciones.size(); ++i) {
        std::cout << denominaciones[i] << ": " << resultado[i] << std::endl;
    }

    // Imprimir el faltante después de todas las denominaciones
    if (cantidad > 0) {
        std::cout << "Faltante: " << cantidad << std::endl;
    }
}
