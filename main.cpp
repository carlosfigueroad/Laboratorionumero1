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
#include "nuevopunto4.h" // Incluye el archivo de encabezado de NuevoPunto4
#include "nuevopunto5.h"
#include "nuevopunto6.h"
#include "nuevopunto8.h"
using namespace std;

int main(){
    nuevoejercicio1();
    nuevoejercicio2();
    nuevoEjercicio3();
    nuevoejercicio4(1245, 345);  // Llama a la función "nuevoejercicio4" con los argumentos 1245 y 345
    nuevoejercicio5();
    nuevoejercicio6(3);
    int a, b, c;
        std::cout << "Ingresa el valor de a: ";
        std::cin >> a;
        std::cout << "Ingresa el valor de b: ";
        std::cin >> b;
        std::cout << "Ingresa el valor de c: ";
        std::cin >> c;

        // Llama a la función y muestra el resultado
        int resultado = calcularSumaMultiplos(a, b, c);
        std::cout << resultado <<endl;
    ejercicio2();
    ejercicio3();
    ejercicio4();
    ejercicio5();
    ejercicio6();


    return 0;
}
