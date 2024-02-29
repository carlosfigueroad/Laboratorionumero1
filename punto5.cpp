#include <iostream>
#include <cmath>  // Necesito esta biblioteca para usar la función round().
using namespace std;

void ejercicio5() {
    double A, B;  // Defino dos variables para almacenar los números que el usuario ingresará.

    cout << "Ingrese el primer numero (A): ";
    cin >> A;  // Guardo el primer número ingresado por el usuario en la variable A.
    cout << "Ingrese el segundo numero (B): ";
    cin >> B;  // Guardo el segundo número ingresado por el usuario en la variable B.

    // Ahora, realizo la división de A entre B y la redondeo.
    if(B != 0) {  // Primero verifico que B no sea cero para evitar una división por cero.
        int division = round(A / B);  // Realizo la división y la redondeo.
        cout << "A/B = " << division << endl;  // Imprimo el resultado.
    } else {
        cout << "Error: No se puede dividir por cero." << endl;  // Si B es cero, imprimo un mensaje de error.
    }
}

int main() {
    ejercicio5();  // Llamo a la función ejercicio5 desde la función principal.
    return 0;
}
