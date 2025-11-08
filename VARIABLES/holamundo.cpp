#include <iostream>

int main(){
    std::cout << "Hola" <<'\n'; // Mostrar mensaje con salto de linea
    
    //TIPOS DE VARIABLES
    int var1 = 5; //Declaracion de variables
    int var2 = 6;
    int suma = var1 + var2;
    std::cout << suma << '\n'; 

    double precio = 10.99; //64bits hasta 15 digitos
    float precio2 = 22.99; // 32bits 7 decimales 
    long double precio3 = 23.0333; //numeros con muchos decimales

    char calificacion = 'A' ;
    std::cout << calificacion << '\n';

    bool estudiante = true;
    
    std::string nombre = "Alex"; // Comillas simples solo con un caracter
    std::cout<<"Hola "<< nombre; // Concatenar  
    return 0;
}