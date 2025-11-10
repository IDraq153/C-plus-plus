#include <iostream>
using std::cout;

//PUNTEROS acceden directamente a la informacion no sera necesario retornar algo
//COMO EN ESTA SITUACION al duplicar la lista
//Estamos modificando directamente los valores sin necesidad de retornar y igualar
//La lista duplicada
void duplicarElemento(int* arr, int tam) {
    for (int i = 0; i < tam; i++) {
        arr[i] *= 2;
    }
}
void mostrarLetras(const char* str);

int main() {
    int numeros[] = {1,2,3,4,5};
    duplicarElemento(numeros, 5);
    for (int i = 0; i < 5; i++) {
        cout << numeros[i] << " ";
    }
    cout << "\n";
    mostrarLetras("Hola");
    return 0;
}
void mostrarLetras(const char* str) {
    while (*str != '\0') {
        cout << *str << std::endl;
        str++;
    }    
}
