#include <vector> // Incluye la biblioteca vector

class MagicSquare { // Define la clase MagicSquare
public:
   void ingresarMatriz(); // Declara el método ingresarMatriz()
   void imprimirMatriz(); // Declara el método imprimirMatriz()
   bool esCuadradoMagico(); // Declara el método esCuadradoMagico()

private:
   std::vector<std::vector<int>> matrix; // Declara un miembro privado "matrix" que es un vector bidimensional de enteros
};

void ejercicio12(); // Declara la función ejercicio12()
