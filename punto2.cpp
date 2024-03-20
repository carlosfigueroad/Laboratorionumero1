#include "punto2.h"

// Definición de la función "ejercicio2"
void ejercicio2() {
    // Se crea un arreglo de 200 caracteres
    char arreglo[200];
    // Se inicializa el generador de números aleatorios
    srand(time(0));
    // Se llena el arreglo con letras mayúsculas aleatorias
    for(int i = 0; i < 200; i++) {
        arreglo[i] = 'A' + rand() % 26;
    }
    // Se llama a la función "imprimirArreglo" para imprimir el arreglo
    imprimirArreglo(arreglo);
    // Se llama a la función "contarLetras" para contar e imprimir cuántas veces aparece cada letra
    contarLetras(arreglo);
}

// Definición de la función "imprimirArreglo"
void imprimirArreglo(char* arreglo) {
    // Se recorre el arreglo y se imprime cada caracter
    for(int i = 0; i < 200; i++) {
        std::cout << arreglo[i];
    }
    // Se imprime una línea nueva al final
    std::cout << std::endl;
}

// Definición de la función "contarLetras"
void contarLetras(char* arreglo) {
    // Se crea un arreglo para contar las apariciones de cada letra
    int conteo[26] = {0};
    // Se recorre el arreglo de caracteres y se incrementa el contador correspondiente para cada letra
    for(int i = 0; i < 200; i++) {
        conteo[arreglo[i] - 'A']++;
    }
    // Se recorre el arreglo de conteos y se imprime cuántas veces apareció cada letra
    for(int i = 0; i < 26; i++) {
        std::cout << char('A' + i) << ": " << conteo[i] << std::endl;
    }
}
