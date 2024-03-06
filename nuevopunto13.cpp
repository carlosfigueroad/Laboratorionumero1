#include "nuevopunto13.h"  // Incluye el archivo de cabecera "nuevopunto13.h".
#include <stdio.h>  // Incluye la biblioteca estándar de entrada y salida.

// Función para calcular el factorial de un número
double factorial(int n) {
    double fact = 1;  // Inicializa 'fact' en 1.
    for(int i = 2; i <= n; i++)  // Para cada número 'i' desde 2 hasta 'n',
        fact *= i;  // multiplica 'fact' por 'i'.
    return fact;  // Devuelve 'fact'.
}

// Implementa la función "nuevoejercicio13"
void nuevoejercicio13() {
    int num_elementos;  // Declara la variable 'num_elementos'.
    printf("Por favor, ingresa un numero entero: ");  // Solicita al usuario que ingrese un número.
    scanf("%d", &num_elementos);  // Lee el número ingresado por el usuario y lo almacena en 'num_elementos'.

    double e = 1.0;  // Inicializa 'e' en 1.0.
    // Calcula la suma hasta 'num_elementos'
    for(int i = 1; i < num_elementos; i++)  // Para cada número 'i' desde 1 hasta 'num_elementos',
        e += 1/factorial(i);  // suma 1 dividido por el factorial de 'i' a 'e'.
    printf("e es aproximadamente: %.2f\n", e);  // Imprime el resultado.
}
