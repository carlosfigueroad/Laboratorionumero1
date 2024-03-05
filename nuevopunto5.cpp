#include "nuevopunto5.h"
#include <iostream>

void nuevoejercicio5() {
    int size;
    std::cout << "Por favor, ingrese un número impar: ";
    std::cin >> size;
    if(size % 2 == 0){
        std::cout << "El número ingresado no es impar. Por favor, intente de nuevo.";
    } else {
        int i, j, mid = (size/2);
        for(i=0; i<=mid; i++) {
            for(j=0; j<=mid-i; j++)
                std::cout << " ";
            for(j=0; j<(i*2)-1; j++)
                std::cout << "*";
            std::cout << "\n";
        }
        for(i=mid+1; i<size; i++) {
            for(j=0; j<=i-mid; j++)
                std::cout << " ";
            for(j=0; j<(size-i)*2-1; j++)
                std::cout << "*";
            std::cout << "\n";
        }
    }
}
