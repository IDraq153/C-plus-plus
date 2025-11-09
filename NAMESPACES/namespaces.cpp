#include <iostream>
//Espacios de bloques 2 o mas entidades puedn compartir mismo nombre

namespace primero {
    int x = 1;
}
namespace segundo {
    int x = 3;
}
int main(){
    using namespace primero; // Traer el valor de x de primero 
    using std::cout;

    cout<<"X = "<< x << "\n";  //Funcion main valor x
    cout<<"X = "<< primero :: x << "\n";  // Namespace X = 1 
    cout<<"X = "<< segundo :: x;  // Namespace X = 3
    return 0;

    /*
    ESTO ES UNA MALA PRACTICA EN PROGRAMAS GRANDES
    using std;
    cout << "X = " << x; Ya no se tiene que poner el std

    using std::cout;
    solo los std para cout porque std tiene varios datos para utilizar.
    */
}