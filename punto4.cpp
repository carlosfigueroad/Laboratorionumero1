#include <iostream>
using namespace std;

void ejercicio4() {
    int A, B;  // Defino dos variables para almacenar los números que el usuario ingresará.

    cout << "Ingrese el primer numero (A): ";
    cin >> A;  // Guardo el primer número ingresado por el usuario en la variable A.
    cout << "Ingrese el segundo numero (B): ";
    cin >> B;  // Guardo el segundo número ingresado por el usuario en la variable B.

    // Ahora, comparo los dos números y determino cuál es el menor.
    if(A < B) {
        cout << "El menor es: " << A << endl;  // Si A es menor que B, imprimo A.
    } else if(B < A) {
        cout << "El menor es: " << B << endl;  // Si B es menor que A, imprimo B.
    } else {
        cout << "Ambos numeros son iguales." << endl;  // Si A y B son iguales, imprimo este mensaje.
    }
}
