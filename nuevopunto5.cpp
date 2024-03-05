// Este es el archivo de implementación "nuevopunto5.cpp"
// Contiene la implementación de la función "nuevoejercicio5"

#include "nuevopunto5.h"  // Incluye el archivo de cabecera "nuevopunto5.h"
#include <stdio.h>  // Incluye la biblioteca estándar de entrada y salida

// Implementa la función "nuevoejercicio5"
void nuevoejercicio5(int size) {
    int i, j, mid = (size/2);
    for(i=0; i<=mid; i++) {  // Para cada línea hasta la mitad del patrón
        for(j=0; j<=mid-i; j++)  // Imprime espacios antes de los asteriscos
            printf(" ");
        for(j=0; j<(i*2)-1; j++)  // Imprime los asteriscos
            printf("*");
        printf("\n");  // Salta a la siguiente línea
    }
    for(i=mid+1; i<size; i++) {  // Para cada línea después de la mitad del patrón
        for(j=0; j<=i-mid; j++)  // Imprime espacios antes de los asteriscos
            printf(" ");
        for(j=0; j<(size-i)*2-1; j++)  // Imprime los asteriscos
            printf("*");
        printf("\n");  // Salta a la siguiente línea
    }
}
