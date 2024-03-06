#include "nuevopunto12.h"  // Incluye el archivo de cabecera "nuevopunto12.h".
#include <stdio.h>  // Incluye la biblioteca estándar de entrada y salida.

// Función para verificar si un número es primo
bool esPrimo(int n) {
    if (n <= 1) return false;  // Si n es menor o igual a 1, no es primo.
    if (n == 2) return true;  // Si n es igual a 2, es primo.
    if (n % 2 == 0) return false;  // Si n es par y mayor que 2, no es primo.
    for (int i = 3; i * i <= n; i += 2)  // Comprueba si n es divisible por algún número impar hasta su raíz cuadrada.
        if (n % i == 0)  // Si n es divisible por i, no es primo.
            return false;
    return true;  // Si no se encontró ningún divisor, n es primo.
}

// Implementa la función "nuevoejercicio12"
void nuevoejercicio12() {
    int num;  // Declara la variable 'num'.
    printf("Por favor, ingresa un numero entero: ");  // Solicita al usuario que ingrese un número.
    scanf("%d", &num);  // Lee el número ingresado por el usuario y lo almacena en 'num'.

    int max_factor_primo = -1;  // Inicializa 'max_factor_primo' en -1.
    for (int i = 2; i * i <= num; ++i) {  // Para cada número 'i' desde 2 hasta la raíz cuadrada de 'num',
        if (num % i == 0) {  // si 'num' es divisible por 'i',
            if (esPrimo(i)) {  // y si 'i' es primo,
                max_factor_primo = i;  // actualiza 'max_factor_primo' con 'i'.
            }
            if (esPrimo(num / i)) {  // Si 'num' dividido por 'i' es primo,
                max_factor_primo = num / i;  // actualiza 'max_factor_primo' con 'num' dividido por 'i'.
            }
        }
    }

    if (max_factor_primo == -1) {  // Si 'max_factor_primo' sigue siendo -1 después de recorrer todos los posibles factores,
        printf("El número ingresado es primo.\n");  // entonces el número ingresado es primo.
    } else {
        printf("El mayor factor primo de %d es: %d\n", num, max_factor_primo);  // De lo contrario, imprime el resultado.
    }
}
