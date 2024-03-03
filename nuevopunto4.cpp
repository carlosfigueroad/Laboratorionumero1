// Este archivo de implementación define los métodos de la clase Tiempo
#include "nuevoejercicio4.h"  // Se incluye el archivo de encabezado correspondiente

// Se implementan los métodos de la clase Tiempo
void Tiempo::setHora(int h) {
    hora = h;  // Se establece el valor de la hora
}

void Tiempo::setDuracion(int d) {
    duracion = d;  // Se establece el valor de la duración
}

int Tiempo::getHora() {
    return hora;  // Se devuelve el valor de la hora
}

int Tiempo::getDuracion() {
    return duracion;  // Se devuelve el valor de la duración
}

int Tiempo::calcularTiempoFinal() {
    // Aquí se implementa la lógica para calcular el tiempo final
    int horaInicial = getHora() / 100;  // Se obtiene la hora inicial
    int minutoInicial = getHora() % 100;  // Se obtienen los minutos iniciales
    int horaDuracion = getDuracion() / 100;  // Se obtiene la duración en horas
    int minutoDuracion = getDuracion() % 100;  // Se obtienen los minutos de duración

    int horaFinal = horaInicial + horaDuracion;  // Se calcula la hora final
    int minutoFinal = minutoInicial + minutoDuracion;  // Se calculan los minutos finales

    if (minutoFinal >= 60) {
        horaFinal++;  // Si los minutos finales son 60 o más, se incrementa la hora final en 1
        minutoFinal -= 60;  // y se restan 60 a los minutos finales
    }

    if (horaFinal >= 24) {
        horaFinal -= 24;  // Si la hora final es 24 o más, se resta 24 a la hora final
    }

    return horaFinal * 100 + minutoFinal;  // Se devuelve la hora final y los minutos finales en el formato HHMM
}
