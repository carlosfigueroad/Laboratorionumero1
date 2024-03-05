#include "nuevopunto10.h"
#include <iostream>

int esPrimo(int num) {
    if (num <= 1) return 0;  // 0 y 1 no son primos
    if (num % 2 == 0 && num > 2) return 0;  // Todos los números pares mayores que 2 no son primos
    for(int i = 3; i * i <= num; i += 2) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

void nuevoejercicio10(int n) {
    int count = 0;
    int num = 2;

    while (count < n) {
        if (esPrimo(num)) {
            count++;
            if (count == n)
                std::cout << "El primo número " << n << " es: " << num << std::endl;
        }
        num++;
    }
}
