// Este es el archivo de implementación "nuevopunto4.cpp"
// Contiene la implementación de la función "nuevoejercicio4"

#include "nuevopunto4.h"  // Incluye el archivo de cabecera "nuevopunto4.h"
#include <stdio.h>  // Incluye la biblioteca estándar de entrada y salida

// Implementa la función "nuevoejercicio4"
void nuevoejercicio4(int hora, int duracion) {
    int horaFinal = (hora / 100 * 60 + hora % 100 + duracion) % 1440;  // Calcula la hora final en minutos
    printf("La hora es %02d%02d.\n", horaFinal / 60, horaFinal % 60);  // Imprime la hora final en formato HHMM
}
