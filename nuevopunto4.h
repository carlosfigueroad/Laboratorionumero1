// Este archivo de encabezado define la clase Tiempo
#ifndef NUEVOEJERCICIO4_H  // Comienza la guardia de encabezado para evitar la inclusión doble
#define NUEVOEJERCICIO4_H

// Se define la clase Tiempo
class Tiempo {
    private:
        int hora;  // Atributo para la hora
        int duracion;  // Atributo para la duración
    public:
        void setHora(int h);  // Método para establecer la hora
        void setDuracion(int d);  // Método para establecer la duración
        int getHora();  // Método para obtener la hora
        int getDuracion();  // Método para obtener la duración
        int calcularTiempoFinal();  // Método para calcular el tiempo final
};

#endif // NUEVOEJERCICIO4_H  // Termina la guardia de encabezado
