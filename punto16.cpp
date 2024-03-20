#include "punto16.h" // Incluye el archivo de cabecera "punto16.h"
#include <iostream> // Incluye la biblioteca iostream para entrada y salida de datos
#include <vector> // Incluye la biblioteca vector

void ejercicio16() {
    int n; // Declara una variable para almacenar el tamaño de la cuadrícula
    std::cout << "Ingrese el tamaño de la cuadricula: "; // Solicita al usuario que ingrese el tamaño de la cuadrícula
    std::cin >> n; // Almacena el tamaño de la cuadrícula ingresado por el usuario en la variable n

    std::vector<std::vector<int>> grid(n + 1, std::vector<int>(n + 1, 0)); // Crea una cuadrícula de tamaño (n + 1) x (n + 1) y la llena con ceros
    for (int i = 0; i <= n; ++i) { // Recorre cada fila de la cuadrícula
        grid[i][0] = 1; // Asigna 1 a la primera columna de cada fila
        grid[0][i] = 1; // Asigna 1 a la primera fila de cada columna
    }

    for (int i = 1; i <= n; ++i) { // Recorre cada fila de la cuadrícula, empezando por la segunda fila
        for (int j = 1; j <= n; ++j) { // Recorre cada columna de la cuadrícula, empezando por la segunda columna
            grid[i][j] = grid[i - 1][j] + grid[i][j - 1]; // Calcula el número de caminos para llegar a la posición (i, j)
        }
    }

    std::cout << "Para una malla de " << n << "x" << n << " puntos hay " << grid[n][n] << " caminos." << std::endl; // Imprime el número de caminos para una cuadrícula de nxn puntos
}
