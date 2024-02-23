#include <iostream>

using namespace


int ejercio1(){

    char caracter;
    cout << "Por favor, ingrese un caracter: " << endl;
    cin >>caracter;

       if(caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u'
          ||caracter == 'A' || caracter == 'E' || caracter == 'I' || caracter == 'O' || caracter == 'U'){
           cout <<  caracter <<" es una vocal."<<endl;
       }

       else if(caracter == 'b'||caracter == "c"||caracter == "d" ||caracter == "f" ||caracter == "g"
               | |caracter == "h"||caracter == "j"||caracter == "k" || caracter == "l" ||caracter == "m"
               | | caracter == "n"|| caracter == "p"|| caracter == "q" || caracter == "r"||
                caracter == "s"|| caracter == "t"|| caracter == "v"|| caracter == "w"||caracter == "x"||
                caracter == "y"){
           cout <<  caractere<<" es una consonante "<< endl;
        }

        else{
            cout << "No es una letra."<< endl;
        }

   return 0;
   }
}
