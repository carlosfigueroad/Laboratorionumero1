#include <iostream>
#include "punto1.h"
using namespace std;

int nuevoejercicio1(){
    char caracter;
    cout << "Por favor, ingrese un caracter: " << endl;
    cin >> caracter;

    if(caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' ||
       caracter == 'u' ||caracter == 'A' ||caracter == 'E' ||caracter == 'I' ||
       caracter == 'O' ||caracter == 'U'){
        cout << caracter<<" es una vocal."<<endl;
    }
    else if(caracter == 'b' || caracter == 'c' || caracter == 'd' || caracter == 'f' ||
            caracter == 'g' || caracter == 'h' || caracter == 'j' || caracter == 'k' ||
            caracter == 'l' || caracter == 'm' || caracter == 'n' || caracter == 'p' ||
            caracter == 'q' || caracter == 'r' || caracter == 's' || caracter == 't' ||
            caracter == 'v' || caracter == 'w' || caracter == 'x' || caracter == 'y' ||
            caracter == 'z'|| caracter == 'B' || caracter == 'C' || caracter == 'D' ||
            caracter == 'G' || caracter == 'H' || caracter == 'J' || caracter == 'K' ||
            caracter == 'L' || caracter == 'M' || caracter == 'N' || caracter == 'P' ||
            caracter == 'Q' || caracter == 'R' || caracter == 'S' || caracter == 'T' ||
            caracter == 'V' || caracter == 'W' || caracter == 'X' || caracter == 'Y' ||
            caracter == 'Z' ||caracter == 'F'){

         cout << caracter << " es una consonante" << endl;
    }
    else{
         cout << "No es una letra."<<endl;
    }
    return 0;
}
