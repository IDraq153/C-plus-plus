#include <iostream>
using std::cout;
using std::cin;
using string_t = std::string;

//ESTRUCTURA ALMACENA DIFERENTES TIPOS DE DATOS
//ES COMO UN ARREGLO DE VALORES
struct estudiante {
    //MIEMBROS:
    string_t nombre;
    double promedio;
    bool inscrito;
};

int main() {
    estudiante est_1;
    est_1.nombre = "Dario";
    est_1.promedio = 12.5;
    est_1.inscrito = true;

    cout << est_1.nombre << std::endl;
    cout << est_1.promedio << std::endl;
    cout << est_1.inscrito << std::endl;
    
    estudiante est_2;
    est_2.nombre = "Juan";
    est_2.promedio = 13.5;
    est_2.inscrito = true;

    cout << est_2.nombre << std::endl;
    cout << est_2.promedio << std::endl;
    cout << est_2.inscrito << std::endl;
    return 0;
}
