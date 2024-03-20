#include <vector> // Incluye la biblioteca vector

class Rectangle { // Define la clase Rectangle
public:
   void ingresarRectangulo(); // Declara el método ingresarRectangulo()
   std::vector<int> interseccion(const Rectangle& other); // Declara el método interseccion()

private:
   std::vector<int> rect; // Declara un miembro privado "rect" que es un vector de enteros
};

void ejercicio15(); // Declara la función ejercicio15()
