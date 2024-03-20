#include "punto15.h" // Incluye el archivo de cabecera "punto15.h"
#include <iostream> // Incluye la biblioteca iostream para entrada y salida de datos

void Rectangle::ingresarRectangulo() {
    rect.resize(4); // Redimensiona el vector a 4 elementos
    std::cout << "Ingrese las coordenadas de la esquina superior izquierda, el ancho y la altura del rectangulo (x, y, ancho, alto): "; // Solicita al usuario que ingrese los datos del rectángulo
    for (int i = 0; i < 4; ++i) { // Recorre cada elemento del vector
        std::cin >> rect[i]; // Almacena el dato ingresado por el usuario en el elemento correspondiente del vector
    }
}

std::vector<int> Rectangle::interseccion(const Rectangle& other) {
    int x = std::max(rect[0], other.rect[0]); // Calcula la coordenada x de la esquina superior izquierda de la intersección
    int y = std::max(rect[1], other.rect[1]); // Calcula la coordenada y de la esquina superior izquierda de la intersección
    int ancho = std::min(rect[0] + rect[2], other.rect[0] + other.rect[2]) - x; // Calcula el ancho de la intersección
    int alto = std::min(rect[1] + rect[3], other.rect[1] + other.rect[3]) - y; // Calcula la altura de la intersección
    return {x, y, ancho, alto}; // Retorna un vector con los datos de la intersección
}

void ejercicio15() {
    Rectangle rect1, rect2; // Crea dos objetos de la clase Rectangle llamados "rect1" y "rect2"
    rect1.ingresarRectangulo(); // Llama al método ingresarRectangulo() del objeto "rect1"
    rect2.ingresarRectangulo(); // Llama al método ingresarRectangulo() del objeto "rect2"

    // Calcula la intersección de los rectángulos e imprime el resultado
    std::vector<int> inter = rect1.interseccion(rect2); // Llama al método interseccion() del objeto "rect1"
    std::cout << "La intersección de los rectangulos es: [" << inter[0] << ", " << inter[1] << ", " << inter[2] << ", " << inter[3] << "]" << std::endl;
}
