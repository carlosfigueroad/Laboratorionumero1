#include <iostream>
#include <cmath>  // Necesito esta biblioteca para usar la función round().
using namespace std;

int ejercicio5() {
    double A, B;  // Defino dos variables para almacenar los números que el usuario ingresará.

    cout << "Ingrese el primer numero (A): ";
    cin >> A;  // Guardo el primer número ingresado por el usuario en la variable A.
    cout << "Ingrese el segundo numero (B): ";
    cin >> B;  // Guardo el segundo número ingresado por el usuario en la variable B.

    // Ahora, realizo la división de A entre B y la redondeo.
    if(B != 0) {  // Esta línea verifica que B no sea cero para evitar una división por cero.
        int division = round(A / B);  // Esta línea realiza la división de A entre B, la redondea y almacena el resultado en la variable division.
        cout << "A/B = " << division << endl;  // Esta línea imprime el resultado de la división.
        return 0;  // Todo salió bien, así que devuelvo 0.
    } else {
        cout << "Error: No se puede dividir por cero." << endl;  // Si B es cero, el programa imprime un mensaje de error.
        return -1;  // Devuelvo -1 para indicar que hubo un error.
    }
}

