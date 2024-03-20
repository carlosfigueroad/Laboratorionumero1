#include <vector> // Incluye la biblioteca vector

class Matrix { // Define la clase Matrix
public:
   void llenarMatriz(); // Declara el método llenarMatriz()
   void imprimirMatriz(); // Declara el método imprimirMatriz()
   void rotarMatriz(); // Declara el método rotarMatriz()

private:
   std::vector<std::vector<int>> matrix; // Declara un miembro privado "matrix" que es un vector bidimensional de enteros
};

void ejercicio14(); // Declara la función ejercicio14()
