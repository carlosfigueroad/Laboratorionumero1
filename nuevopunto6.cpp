#include "nuevopunto6.h"
#include <stdio.h>

// Función para calcular el factorial de un número
double factorial(int n) {
    double fact = 1;
    for(int i = 2; i <= n; i++)
        fact *= i;
    return fact;
}

// Implementa la función "nuevoejercicio6"
void nuevoejercicio6() {
    int num_elementos;
    printf("Por favor, ingresa un numero entero: ");
    scanf("%d", &num_elementos);  // Acepta la entrada del usuario

    double e = 1.0;  // Inicializa e
    // Calcula la suma hasta num_elementos
    for(int i = 1; i < num_elementos; i++)
        e += 1/factorial(i);
    printf("e es aproximadamente: %.2f\n", e);  // Imprime el resultado
}
