#include "nuevopunto9.h"  // Incluye el archivo de cabecera "nuevopunto9.h"
#include <stdio.h>  // Incluye la biblioteca estándar de entrada y salida
#include <math.h>  // Incluye la biblioteca de matemáticas para usar la función pow

// Implementa la función "nuevoejercicio9"
void nuevoejercicio9() {
    int n;  // Declara la variable n
    printf("Por favor, ingresa un numero entero: ");  // Pide al usuario que ingrese un número
    scanf("%d", &n);  // Lee el número ingresado por el usuario

    int sum = 0;  // Inicializa la suma
    while(n > 0) {  // Mientras n sea mayor que 0
        int digit = n % 10;  // Obtiene el último dígito de n
        sum += pow(digit, digit);  // Añade digit^digit a la suma
        n /= 10;  // Elimina el último dígito de n
    }
    printf("El resultado de la suma es: %d\n", sum);  // Imprime el resultado
}
