#include "punto11.h"  // Incluye el archivo de cabecera con la declaración de ejercicio11
#include <iostream>   // Incluye la biblioteca estándar de entrada/salida
#include <vector>     // Incluye la biblioteca de vector para usar contenedores de tipo vector

void ejercicio11() {  // Definición de la función ejercicio11
    // Creación de una matriz para representar los asientos de la sala de cine
    std::vector<std::vector<char>> sala(15, std::vector<char>(20, '-'));

    // Procesamiento de reservas o cancelaciones
    char opcion;
    char fila;
    int numero;
    int intentosInvalidos = 0;  // Añade un contador para los intentos inválidos

    std::cout << "Ingrese 'r' para reservar, 'c' para cancelar o 's' para salir: ";
    while (std::cin >> opcion && opcion != 's') {
        if (opcion == 'r' || opcion == 'c') {
            std::cout << "Ingrese la fila (A-O) y el número del asiento (1-20): ";
            std::cin >> fila >> numero;
            // Convertir la fila a índice y ajustar el número del asiento
            int indiceFila = fila - 'A';
            int indiceAsiento = numero - 1;
            // Reservar o cancelar el asiento
            sala[indiceFila][indiceAsiento] = (opcion == 'r') ? '+' : '-';
            // Mostrar la sala actualizada
            for (const auto& fila : sala) {
                for (char asiento : fila) {
                    std::cout << asiento;
                }
                std::cout << std::endl;
            }
            intentosInvalidos = 0;  // Restablece el contador si la opción es válida
        } else {
            std::cout << "Opcion invalida. Intente de nuevo: ";
            intentosInvalidos++;  // Incrementa el contador si la opción es inválida
            if (intentosInvalidos >= 3) {  // Si el usuario ha ingresado 3 opciones inválidas, sal del bucle
                std::cout << "Demasiados intentos invalidos. Saliendo...\n";
                break;
            }
        }
    }
}
