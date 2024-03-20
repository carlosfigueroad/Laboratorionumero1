#include "punto13.h" // Incluye el archivo de cabecera "punto13.h"
#include <iostream> // Incluye la biblioteca iostream para entrada y salida de datos

void Galaxy::ingresarMatriz() {
    int size; // Declara una variable para almacenar el tamaño de la matriz
    std::cout << "Ingrese el tamano de la matriz: "; // Solicita al usuario que ingrese el tamaño de la matriz
    std::cin >> size; // Almacena el tamaño de la matriz ingresado por el usuario en la variable size
    matrix.resize(size, std::vector<int>(size)); // Redimensiona la matriz al tamaño ingresado por el usuario
    for (int i = 0; i < size; ++i) { // Recorre cada fila de la matriz
        for (int j = 0; j < size; ++j) { // Recorre cada columna de la matriz
            std::cout << "Ingrese el elemento en la posicion (" << i << ", " << j << "): "; // Solicita al usuario que ingrese el elemento en la posición (i, j)
            std::cin >> matrix[i][j]; // Almacena el elemento ingresado por el usuario en la posición (i, j) de la matriz
        }
    }
}

int Galaxy::contarEstrellas() {
    int size = matrix.size(); // Obtiene el tamaño de la matriz
    int count = 0; // Declara una variable para contar el número de estrellas
    for (int i = 1; i < size - 1; ++i) { // Recorre cada fila de la matriz, excepto la primera y la última fila
        for (int j = 1; j < size - 1; ++j) { // Recorre cada columna de la matriz, excepto la primera y la última columna
            // Calcula la suma de los elementos en la posición (i, j) y sus vecinos
            int sum = matrix[i][j] + matrix[i-1][j] + matrix[i+1][j] + matrix[i][j-1] + matrix[i][j+1];
            // Si la media de la suma es mayor que 6, incrementa el contador de estrellas
            if (sum / 5 > 6) {
                ++count;
            }
        }
    }
    return count; // Retorna el número de estrellas
}

void ejercicio13() {
    Galaxy galaxia; // Crea un objeto de la clase Galaxy llamado "galaxia"
    galaxia.ingresarMatriz(); // Llama al método ingresarMatriz() del objeto "galaxia"

    // Cuenta el número de estrellas en la matriz e imprime el resultado
    std::cout << "El numero de estrellas en la imagen es: " << galaxia.contarEstrellas() << std::endl;
}
