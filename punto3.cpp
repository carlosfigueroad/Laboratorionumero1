#include "punto3.h"
#include <iostream>
using namespace std;

int ejercicio3() {
    int A, B;
    cout << "Ingrese el primer numero (A): ";
    cin >> A;
    cout << "Ingrese el segundo numero (B): ";
    cin >> B;

    if(A > B) {
        cout << "El mayor es: " << A << endl;
    } else if(B > A) {
        cout << "El mayor es: " << B << endl;
    } else {
        cout << "Ambos numeros son iguales." << endl;
    }
    return 0;
}
