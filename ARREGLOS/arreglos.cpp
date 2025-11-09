#include <iostream>
using std::cout;

int main() {
    int numeros[5] = {1,2,3,4,5};
    numeros[2] = 25; //rempplaza en esa posicion

    //Imprimir arreglo
    int mayor = 0;
    for (int i = 0; i < 5; i++) {
        if (mayor < numeros[i]) {mayor = numeros[i];}
        cout << numeros[i] << " ";
    }
    cout << "";
    cout << "El mayor numero: " << mayor;
    //Hay arreglos de varios tipos como java
    
    return 0;
}