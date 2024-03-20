#include "punto14.h" // Incluye el archivo de cabecera "punto14.h"
#include <iostream> // Incluye la biblioteca iostream para entrada y salida de datos

void Matrix::llenarMatriz() {
    matrix.resize(5, std::vector<int>(5)); // Redimensiona la matriz a 5x5
    int count = 1; // Inicializa un contador en 1
    for (int i = 0; i < 5; ++i) { // Recorre cada fila de la matriz
        for (int j = 0; j < 5; ++j) { // Recorre cada columna de la matriz
            matrix[i][j] = count++; // Asigna el valor del contador a la posición (i, j) de la matriz y luego incrementa el contador
        }
    }
}

void Matrix::imprimirMatriz() {
    for (const auto &row : matrix) { // Recorre cada fila de la matriz
        for (const auto &element : row) { // Recorre cada elemento de la fila
            std::cout << element << ' '; // Imprime el elemento seguido de un espacio
        }
        std::cout << '\n'; // Imprime un salto de línea después de imprimir todos los elementos de una fila
    }
}

void Matrix::rotarMatriz() {
    std::vector<std::vector<int>> rotated(5, std::vector<int>(5)); // Crea una nueva matriz de 5x5 para almacenar la matriz rotada
    for (int i = 0; i < 5; ++i) { // Recorre cada fila de la matriz
        for (int j = 0; j < 5; ++j) { // Recorre cada columna de la matriz
            rotated[j][4 - i] = matrix[i][j]; // Asigna el elemento en la posición (i, j) de la matriz original a la posición (j, 4 - i) de la matriz rotada
        }
    }
    matrix = rotated; // Asigna la matriz rotada a la matriz original
}

void ejercicio14() {
    Matrix matriz; // Crea un objeto de la clase Matrix llamado "matriz"
    matriz.llenarMatriz(); // Llama al método llenarMatriz() del objeto "matriz"
    matriz.imprimirMatriz(); // Llama al método imprimirMatriz() del objeto "matriz"

    // Rota e imprime la matriz tres veces
    for (int i = 0; i < 3; ++i) {
        matriz.rotarMatriz(); // Llama al método rotarMatriz() del objeto "matriz"
        matriz.imprimirMatriz(); // Llama al método imprimirMatriz() del objeto "matriz"
    }
}
