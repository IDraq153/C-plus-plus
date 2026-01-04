#include <iostream>
using std::cout;
using std::cin;
using string_t = std::string;

struct Automovil {
    string_t modelo;
    string_t color;
    int anio;
};

void imprimirAuto(Automovil &automovil); 

int main() {
    Automovil a1;
    a1.modelo = "Toyota";
    a1.color = "Rojo";    
    a1.anio = 2000;
    
    Automovil a2;
    a2.modelo = "Mustang";
    a2.color = "Azul";    
    a2.anio = 1990;

    cout << &a1 << std::endl;
    cout << &a2 << std::endl;
    
    imprimirAuto(a1);
    imprimirAuto(a2);

    return 0;
}

//AL PASAR UNA ESTRUCTURA COMO ARGUMENTO SE CREA UNA COPIA, PASAR POR VALOR
//PASAR LA DIRECCION DEL VALOR ES POR REFERENCIA CON EL &
void imprimirAuto(Automovil &automovil) {
    cout << "\nMOSTRANDO IMFORMACION DE TU VEHICULO\n";
    cout << automovil.modelo << std::endl;
    cout << automovil.color << std::endl;
    cout << automovil.anio << std::endl;
    cout << &automovil << std::endl;
    automovil.anio = 2000;
}