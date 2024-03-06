#include "nuevopunto11.h"
#include <stdio.h>

// Función para calcular el MCM de dos números
int mcm(int a, int b) {
    int max = (a > b) ? a : b;
    do {
        if (max % a == 0 && max % b == 0) {
            return max;
        }
        ++max;
    } while (true);
}

// Implementa la función "nuevoejercicio11"
void nuevoejercicio11() {
    int num;
    printf("Por favor, ingresa un numero entero: ");
    scanf("%d", &num);  // Acepta la entrada del usuario

    int result = 1;
    for (int i = 2; i <= num; i++) {
        result = mcm(result, i);
    }

    printf("El mínimo común múltiplo es: %d\n", result);  // Imprime el resultado
}
