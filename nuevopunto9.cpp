#include "nuevopunto9.h"
#include <stdio.h>

// Define la función nuevoejercicio9.
void nuevoejercicio9() {
    int n;
    printf("Por favor, ingresa un numero entero: ");
    scanf("%d", &n);

    int sum = 0;  // Inicializa la suma
    while(n > 0) {
        int digit = n % 10;
        int power = 1;
        for(int i = 0; i < digit; i++) {  // Reemplaza la función pow con un bucle
            power *= digit;
        }
        sum += power;  // Añade digit^digit a la suma
        n /= 10;
    }

    printf("El resultado de la suma es: %d\n", sum);  // Imprime el resultado
}
