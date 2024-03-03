#include "nuevopunto3.h"
#include <iostream>

void nuevoEjercicio3() {
    // Implementación de la función del nuevo ejercicio 3
    int dia, mes;
    std::cout << "Introduce el dia: ";
    std::cin >> dia;
    std::cout << "Introduce el mes: ";
    std::cin >> mes;

    if ((mes >= 1 && mes <= 12) && (dia >= 1 && dia <= 31)) {
        std::cout << dia << "/" << mes << " es una fecha valida.\n";
        if (dia == 29 && mes == 2) {
            std::cout << "Posiblemente año bisiesto.\n";
        }
    } else {
        std::cout << dia << "/" << mes << " es una fecha invalida.\n";
    }
}
