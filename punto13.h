#include <vector> // Incluye la biblioteca vector

class Galaxy { // Define la clase Galaxy
public:
   void ingresarMatriz(); // Declara el método ingresarMatriz()
   int contarEstrellas(); // Declara el método contarEstrellas()

private:
   std::vector<std::vector<int>> matrix; // Declara un miembro privado "matrix" que es un vector bidimensional de enteros
};

void ejercicio13(); // Declara la función ejercicio13()
