#include <iostream>
using std::cout;
using std::cin;

int main() {
    std::string nombre = "";
    cout << "Ingrese su nombre: ";
    cin >> nombre; 
    cout << "Hola, "<<nombre << std::endl; 

    // IGUAL QUE JAVA :u
    int edad;
    cout << "Ingrese su edad: ";
    cin >> edad;
    if (edad>=18) {
        cout << std::endl << "Eres mayor de edad" << std::endl;
    } else if (edad>=0 && edad<=18){
        cout << std::endl << "Eres menor de edad" << std::endl;
    } else {
        cout << std::endl << "Error" << std::endl; 
    }

    int num;
    cout << "Ingresa un numero: ";
    cin >> num;
    switch (num) {
    case 1:
        cout << std::endl << "Agarraste 1";
        break;
    default:
        cout << std::endl << "Agarraste cualquier otro numero";        
        break;
    }
    
    return 0;
}