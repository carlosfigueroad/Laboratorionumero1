#include "punto17.h" // Incluye el archivo de cabecera "punto17.h"
#include <iostream> // Incluye la biblioteca iostream para entrada y salida de datos
#include <vector> // Incluye la biblioteca vector

int sumarDivisores(int n) { // Define una función que suma los divisores de un número
    int suma = 1; // Inicializa la suma en 1, ya que 1 es divisor de todos los números
    for (int i = 2; i * i <= n; ++i) { // Recorre todos los números hasta la raíz cuadrada de n
        if (n % i == 0) { // Si i es un divisor de n
            suma += i; // Suma i a la suma
            if (i * i != n) { // Si n no es un cuadrado perfecto
                suma += n / i; // Suma el cociente de n e i a la suma
            }
        }
    }
    return suma; // Retorna la suma de los divisores de n
}

void ejercicio17() {
    int n; // Declara una variable para almacenar el número ingresado por el usuario
    std::cout << "Ingrese un numero: "; // Solicita al usuario que ingrese un número
    std::cin >> n; // Almacena el número ingresado por el usuario en la variable n

    int suma = 0; // Inicializa la suma de los números amigables en 0
    for (int i = 2; i < n; ++i) { // Recorre todos los números menores a n
        int sumaDivisores = sumarDivisores(i); // Calcula la suma de los divisores de i
        if (sumaDivisores > i && sumarDivisores(sumaDivisores) == i) { // Si i y sumaDivisores son números amigables
            suma += i + sumaDivisores; // Suma i y sumaDivisores a la suma
        }
    }

    std::cout << "El resultado de la suma es: " << suma << std::endl; // Imprime el resultado de la suma
}
