#include <iostream>
using std::cout;

//Funcion definida antes de main
void Saludar() {
    cout << "Hola dx" << std::endl;
}
//Declaracion de funcion antes del main
void imprimirMensaje();

int main() {
    Saludar();
    Saludar();

    imprimirMensaje();

    return 0;
}
//Funcion despues del main
void imprimirMensaje() {
    cout << "Mensaje dx" << std::endl;
/*Existen varios tipos de funciones que retornan
los diferentes tipos de datos...
int numero(); esto es declarar para luego ver que hara 
float hla(){

}
Y asi segun los tipos de datos void no retorna nada
*/
}
