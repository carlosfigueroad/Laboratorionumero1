#include <iostream>
#include "punto1.h"
#include "punto2.h"
#include "punto3.h"
#include "punto4.h"
#include "punto5.h"
#include "punto6.h"
#include "punto7.h"
#include "nuevopunto1.h"
#include "nuevopunto2.h"
#include "nuevopunto3.h"
#include "nuevoejercicio4.h"

using namespace std;

int main(){
    ejercicio();
    ejercicio2();
    ejercicio3();
    ejercicio4();
    ejercicio5();
    ejercicio6();
    ejercicio7();
    nuevoejercicio1();
    nuevoejercicio2();
    nuevoEjercicio3();


     return 0;

}
void tiempo(int id)
{
    Tiempo t;
    cout << "El hora es: " << t.calcularDiferencia(tiempoInicial, tiempoFinal) << endl;
}



