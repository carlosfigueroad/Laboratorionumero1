#include "iostream" // Se incluye la biblioteca iostream que permite la entrada y salida de datos.
#include "punto7.h" // Se incluye el archivo de cabecera "punto7.h" donde se declara la función ejercicio7().
using namespace std; // Se utiliza el espacio de nombres "std" para evitar escribir std:: antes de cada función de la biblioteca estándar.

// Se define la función del ejercicio 7
int ejercicio7(){
    int N, suma = 0; // Se declaran dos variables enteras: N y suma. Se inicializa suma en 0.

    cout << "Ingrese un número N: "; // Se solicita al usuario que ingrese un número N.
    cin >> N; // Se almacena el número ingresado por el usuario en la variable N.

    for(int i = 0; i <= N; i++){ // Se inicia un bucle for que se ejecuta desde 0 hasta N (inclusive).
        suma += i; // En cada iteración del bucle, se suma el valor actual de i a la variable suma.
    }

    cout << "La sumatoria desde 0 hasta " << N << " es: " << suma << endl; // Se imprime la suma de todos los números desde 0 hasta N.

    return 0; // La función devuelve 0 para indicar que se ha ejecutado correctamente.
}
