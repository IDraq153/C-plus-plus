#include <iostream>

int main() {
    //ESTAS VARIABLES ESTAN GUARDADAS EN LA MEMORIA DE LA COMPUTADORA
    //ATRAVES DE UNA DIRECCION HEXADECIMAL
    std::string nom = "Dario";
    int edad = 24;
    bool estudiante = true;

    std::cout << &nom << "\n";
    std::cout << &edad << "\n";
    std::cout << &estudiante << "\n";
    return 0;
}