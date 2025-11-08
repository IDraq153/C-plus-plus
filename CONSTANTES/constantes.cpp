#include <iostream>
int main() {
    // VARIABLES QUE NOSE PUEDEN MODIFICAR
    const double PI = 3.141559; // constantes en mayusculas convencion
    const int velocidadDeLuz = 1023232; // convencion escribir asi las variables
    double radio = 10;
    double circunferencia = 2 * PI * radio;
    std::cout<<circunferencia<<" Centimetros";
    return 0;
}