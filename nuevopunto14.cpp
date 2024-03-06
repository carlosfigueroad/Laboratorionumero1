#include "nuevopunto14.h"  // Incluye el archivo de cabecera "nuevopunto14.h"
#include <stdio.h>  // Incluye la biblioteca estándar de entrada y salida

// Función para verificar si un número es palíndromo
int esPalindromo(int n) {
    int reversed = 0;  // Inicializa el número invertido
    int original = n;  // Guarda el número original
    while(n > 0) {  // Mientras n sea mayor que 0
        int digit = n % 10;  // Obtiene el último dígito de n
        reversed = reversed * 10 + digit;  // Añade el dígito al número invertido
        n /= 10;  // Elimina el último dígito de n
    }
    return original == reversed;  // Devuelve verdadero si el número original es igual al número invertido
}

// Implementa la función "nuevoejercicio14"
void nuevoejercicio14() {
    int maxPalindrome = -1;  // Inicializa el máximo palíndromo
    int a = 0, b = 0;  // Inicializa las variables a y b
    for(int i = 999; i >= 100; i--) {  // Para cada número i desde 999 hasta 100
        for(int j = i; j >= 100; j--) {  // Para cada número j desde i hasta 100
            int product = i * j;  // Calcula el producto de i y j
            if(product <= maxPalindrome)  // Si el producto es menor o igual que el máximo palíndromo
                break;  // Rompe el bucle
            if(esPalindromo(product)) {  // Si el producto es un palíndromo
                maxPalindrome = product;  // Actualiza el máximo palíndromo
                a = i;  // Actualiza a
                b = j;  // Actualiza b
            }
        }
    }
    printf("%d*%d=%d\n", a, b, maxPalindrome);  // Imprime el resultado
}
