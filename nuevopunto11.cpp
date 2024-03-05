#include "nuevopunto11.h"
#include <iostream>

// Función para calcular el enésimo número de la serie de Fibonacci
int fibonacci(int n) {
    if (n <= 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

void nuevoejercicio11(int n) {
    int result = fibonacci(n);
    std::cout << "El número " << n << " de la serie de Fibonacci es: " << result << std::endl;
}
