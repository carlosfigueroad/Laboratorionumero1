#include "nuevopunto6.h"  // Incluye el archivo de cabecera "nuevopunto6.h"
#include <stdio.h>  // Incluye la biblioteca estándar de entrada y salida

// Función para calcular el factorial de un número
double factorial(int n) {
    double fact = 1;
    for(int i = 2; i <= n; i++)
        fact *= i;
    return fact;
}

// Implementa la función "nuevoejercicio6"
double nuevoejercicio6(int num_elementos) {
    double e = 1.0;  // Inicializa e
    // Calcula la suma hasta num_elementos
    for(int i = 1; i < num_elementos; i++)
        e += 1/factorial(i);
    printf("e es aproximadamente: %.2f\n", e);  // Imprime el resultado
    return e;
}
