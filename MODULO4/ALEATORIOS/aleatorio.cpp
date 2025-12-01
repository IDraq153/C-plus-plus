#include <iostream>
#include <ctime>
using std::cout;

int main() {
    srand(time(NULL));
    /*  NUMEROS ALEATORIOS
        int num = rand() % 10; //GENERA DEL 0 AL 10

        cout << num;
        return 0;
    */

    //EJERCICIO EVENTOS ALEATORIOS
    int randNum = rand()  % 5 + 1;
    cout << "BIENVENIDO AL SORTEO te salio: " << randNum << "\n";
    
    switch (randNum) {
    case 1:
        cout << "GANASTE UN PELUCHE";
        break;
    case 2:
        cout << "GANASTE UN RELOJ";
        break;
    case 3:
        cout << "GANASTE UN PERRO";   
        break;
    case 4:
        cout << "GANASTE UN MOUSE";  
        break;
    case 5:
        cout << "GANASTE UNA PC";     
        break;
    default:
        cout << "ERROR";
        break;
    }
    cout << "\n" << "GRACIAS POR PARTICIPAR";

    return 0;
}