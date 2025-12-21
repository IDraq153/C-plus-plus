#include <iostream>
using std::cout;
using std::cin;
using string_t = std::string;

int main() {
    //sizeof(); muestra el tamaño de algo en bits
    double num = 23.5112312321;
    string_t text = "Hola";
    //EL NUMERO DOUBLE OCUPA 8 BYTES 
    cout << sizeof(num);
    cout << std::endl;
    //EL STRING CONTIENE LA DIRECCION DONDE OCUPA EL TEXTO OCUPA 32 BYTES
    cout << sizeof(text);
    cout << std::endl;


    char calificaciones[] = {'A','B','C','D'};
    cout << sizeof(calificaciones);  
    cout << std::endl;
    //PARA SABER CANTIDAD ELEMENTOS 
    cout << sizeof(calificaciones)/sizeof(char);  

    return 0;
}