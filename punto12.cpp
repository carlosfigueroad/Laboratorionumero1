#include "punto12.h" // Incluye el archivo de cabecera "punto12.h"
#include <iostream> // Incluye la biblioteca iostream para entrada y salida de datos

void MagicSquare::ingresarMatriz() {
    int size; // Declara una variable para almacenar el tamaño de la matriz
    std::cout << "Ingrese el tamaño de la matriz: "; // Solicita al usuario que ingrese el tamaño de la matriz
    std::cin >> size; // Almacena el tamaño de la matriz ingresado por el usuario en la variable size
    matrix.resize(size, std::vector<int>(size)); // Redimensiona la matriz al tamaño ingresado por el usuario
    for (int i = 0; i < size; ++i) { // Recorre cada fila de la matriz
        for (int j = 0; j < size; ++j) { // Recorre cada columna de la matriz
            std::cout << "Ingrese el elemento en la posicion (" << i << ", " << j << "): "; // Solicita al usuario que ingrese el elemento en la posición (i, j)
            std::cin >> matrix[i][j]; // Almacena el elemento ingresado por el usuario en la posición (i, j) de la matriz
        }
    }
}

void MagicSquare::imprimirMatriz() {
    for (const auto &row : matrix) { // Recorre cada fila de la matriz
        for (const auto &element : row) { // Recorre cada elemento de la fila
            std::cout << element << ' '; // Imprime el elemento seguido de un espacio
        }
        std::cout << '\n'; // Imprime un salto de línea después de imprimir todos los elementos de una fila
    }
}

bool MagicSquare::esCuadradoMagico() {
    int size = matrix.size(); // Obtiene el tamaño de la matriz
    int sum = 0; // Declara una variable para almacenar la suma de los elementos de la primera fila
    for (int i = 0; i < size; ++i) { // Recorre cada elemento de la primera fila
        sum += matrix[0][i]; // Suma el elemento en la posición (0, i) a la variable sum
    }

    // Comprueba las filas
    for (int i = 1; i < size; ++i) { // Recorre cada fila de la matriz, empezando por la segunda fila
        int rowSum = 0; // Declara una variable para almacenar la suma de los elementos de la fila
        for (int j = 0; j < size; ++j) { // Recorre cada elemento de la fila
            rowSum += matrix[i][j]; // Suma el elemento en la posición (i, j) a la variable rowSum
        }
        if (rowSum != sum) { // Si la suma de los elementos de la fila no es igual a la suma de los elementos de la primera fila
            return false; // Retorna falso, ya que la matriz no es un cuadrado mágico
        }
    }

    // Comprueba las columnas
    for (int i = 0; i < size; ++i) { // Recorre cada columna de la matriz
        int colSum = 0; // Declara una variable para almacenar la suma de los elementos de la columna
        for (int j = 0; j < size; ++j) { // Recorre cada elemento de la columna
            colSum += matrix[j][i]; // Suma el elemento en la posición (j, i) a la variable colSum
        }
        if (colSum != sum) { // Si la suma de los elementos de la columna no es igual a la suma de los elementos de la primera fila
            return false; // Retorna falso, ya que la matriz no es un cuadrado mágico
        }
    }

    // Comprueba las diagonales
    int diagSum1 = 0, diagSum2 = 0; // Declara dos variables para almacenar las sumas de las diagonales
    for (int i = 0; i < size; ++i) { // Recorre cada elemento de las diagonales
        diagSum1 += matrix[i][i]; // Suma el elemento en la posición (i, i) a la variable diagSum1
        diagSum2 += matrix[i][size - i - 1]; // Suma el elemento en la posición (i, size - i - 1) a la variable diagSum2
    }
    if (diagSum1 != sum || diagSum2 != sum) { // Si la suma de los elementos de alguna de las diagonales no es igual a la suma de los elementos de la primera fila
        return false; // Retorna falso, ya que la matriz no es un cuadrado mágico
    }

    return true; // Si todas las comprobaciones pasan, retorna verdadero, ya que la matriz es un cuadrado mágico
}

void ejercicio12() {
    MagicSquare magico; // Crea un objeto de la clase MagicSquare llamado "magico"
    magico.ingresarMatriz(); // Llama al método ingresarMatriz() del objeto "magico"
    magico.imprimirMatriz(); // Llama al método imprimirMatriz() del objeto "magico"

    // Verifica si la matriz es un cuadrado mágico y muestra el resultado
    if (magico.esCuadradoMagico()) {
        std::cout << "La matriz es un cuadrado magico." << std::endl;
    } else {
        std::cout << "La matriz no es un cuadrado magico." << std::endl;
    }
}
