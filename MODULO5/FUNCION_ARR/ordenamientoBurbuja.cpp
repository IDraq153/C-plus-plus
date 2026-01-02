#include <iostream>
using std::cout;

void ordenarBurbuja(int numeros[], int tam);

int main() {
    int numeros[] = {5,3,2,1,7,9,11, 5, 123};
    int tam = sizeof(numeros)/sizeof(int);

    cout << "Sin ordenar \n";
    for(int i : numeros) { cout << i << " ";}
    
    cout << "\n" << "Ordenando Arreglo \n";
    ordenarBurbuja(numeros, tam); 
    for(int i : numeros) { cout << i << " ";}

    return 0;
}

void ordenarBurbuja(int numeros[], int tam) {
    int temp;
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam - i - 1; j++) {
            if (numeros[j] > numeros[j + 1]) {
                temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp; 
            }            
        }        
    }
}