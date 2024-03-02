#include <iostream> // Se incluye la biblioteca iostream que permite la entrada y salida de datos.
using namespace std; // Se utiliza el espacio de nombres "std" para evitar escribir std:: antes de cada función de la biblioteca estándar.

// Se define la función del nuevo ejercicio 2
int nuevoejercicio2(){
    int cantidad; // Se declara una variable entera 'cantidad' que almacenará la cantidad de dinero ingresada por el usuario.
    cout << "Ingrese la cantidad de dinero: "; // Se solicita al usuario que ingrese una cantidad de dinero.
    cin >> cantidad; // Se almacena la cantidad de dinero ingresada por el usuario en la variable 'cantidad'.

    int denominaciones[] = {50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50}; // Se declara un array 'denominaciones' que contiene todas las denominaciones de billetes y monedas.
    int cantidadDenominaciones = sizeof(denominaciones) / sizeof(denominaciones[0]); // Se calcula la cantidad de denominaciones disponibles.

    for (int i = 0; i < cantidadDenominaciones; i++) { // Se inicia un bucle for que se ejecuta para cada denominación.
        int numeroBilletesMonedas = cantidad / denominaciones[i]; // Se calcula el número de billetes o monedas de la denominación actual que se pueden dar.
        cantidad %= denominaciones[i]; // Se actualiza la cantidad restante después de dar los billetes o monedas de la denominación actual.
        cout << denominaciones[i] << " : " << numeroBilletesMonedas << endl; // Se imprime el número de billetes o monedas de la denominación actual que se van a dar.
    }

    if (cantidad > 0) { // Si después de dar todos los billetes y monedas posibles aún queda alguna cantidad,
        cout << "Faltante: " << cantidad << endl; // se imprime la cantidad que falta.
    }

    return 0; // La función devuelve 0 para indicar que se ha ejecutado correctamente.
}
