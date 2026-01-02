#include <iostream>
using string_t = std::string;
using std::cout;

void imprimirInfo(const string_t nombre, const int edad);

int main() {
    //PARAMETRO CONST
    string_t nombre = "DARIO";
    int edad = 19;

    imprimirInfo(nombre, edad);
    return 0;
}

//PARA QUE EN LAS FUNCIONES NO SE PUEDA CAMBIAR LOS DATOS, SOLO LECTURA
void imprimirInfo(const string_t nombre, const int edad) {
    cout << "Nombre: " << nombre << "\n";
    cout << "Edad: " << edad << "\n";
}