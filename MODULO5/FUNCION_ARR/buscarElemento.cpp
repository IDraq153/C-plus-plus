#include <iostream>
using std::cout;
using std::cin;

int buscarArreglo(int arreglo[], int tam ,int miNum);

int main() {
    
    int numeros[] = {1,2,3,4,5,6,7,8,9,10};
    int tam = sizeof(numeros)/sizeof(int);
    int indice;
    int miNum;

    cout << "INGRESE NUM A BUSCAR: ";
    cin >> miNum;
    cout << "\n";

    indice = buscarArreglo(numeros, tam, miNum);

    if (indice != -1 ) {
        cout << "El num buscado " << miNum << " se encuentra en el indice" << indice << "\n";
    } else {
        cout << "No se ha encontrado el numero";
    }
    
    return 0;
}

int buscarArreglo(int arreglo[], int tam ,int miNum) {
    
    for (int i = 0; i < tam; i++) {
        if (arreglo[i] == miNum) { return i;} 
    }

    return -1;
}