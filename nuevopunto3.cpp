// Archivo: main.cpp
#include "Fecha.h"
#include <iostream>

int main() {
    Fecha fecha;
    int dia, mes;
    std::cout << "Introduce el día: ";
    std::cin >> dia;
    std::cout << "Introduce el mes: ";
    std::cin >> mes;
    fecha.setDia(dia);
    fecha.setMes(mes);

    if(fecha.esValida()) {
        if (dia == 29 && mes == 2) std::cout << "29/2 es válida en bisiesto.\n";
        else std::cout << dia << "/" << mes << " es una fecha válida.\n";
    } else {
        if (mes < 1 || mes > 12) std::cout << mes << " es un mes inválido.\n";
        else std::cout << dia << "/" << mes << " es una fecha inválida.\n";
    }

    return 0;
}
