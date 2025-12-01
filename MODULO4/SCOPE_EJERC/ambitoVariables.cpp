#include <iostream>
using std::cout;

int miNum = 5; //preferible no optar por esto
//Menos seguridad

void mostrarNum();

int main() {
    //VARIABLES LOCALES <- bloque 
    //VARIABLES GLOBALES <- fuera de todas las funciones
    
    //LOS VALORES DE VARIABLES EN FUNCIONES SON LOS QUE SE TOMAN A MENOS QUE PONGAS ::
    int miNum = 1;
    cout << ::miNum;
    mostrarNum();

    return 0;
}

void mostrarNum() {
    int miNum = 3;
    cout << "\n" <<miNum;
}