#include "iostream"
#include "punto6.h"
using namespace std;

// Definición de la función del ejercicio 6
int ejercicio6(){
    int A, B, resultado = 1;
    cout << "Ingrese dos numeros A y B: ";
    cin >> A >> B;
    for(int i = 0; i < B; i++){
        resultado *= A;
    }
    cout << "A^B = " << resultado << endl;
    return 0;
}
