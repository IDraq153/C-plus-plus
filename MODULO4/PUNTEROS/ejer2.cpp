#include <iostream>
using std::cout;

//los punteros si pueden cambiar de objetivos
void ordenarArreglo(int tam, int* arr) {
    //ORDENAMIENTO BURBUJA CON PUNTEROS
    for (int i = 0; i < tam; i++) { 
        for (int j = 0; j < tam - 1; j++) { 
            int* actual = arr + j; //CREAMOS PUNTERO POSICION 0,1
            int* siguiente = arr + j + 1; //PUNTERO POSICION SIGUIENTE 1,2
            if (*actual > *siguiente) {  
                //LOGICA PARA CAMBIAR 
                int temp = *actual;
                *actual = *siguiente;
                *siguiente = temp;
            }            
        }        
    }
}
void imprimirArreglo(int tam, int* arr) {
    for (int i = 0; i < tam; i++) {
        cout << *(arr+i) << " ";
    }
}

int main() {
    int num[] = {5,1,3,8,7,9};
    imprimirArreglo(6,num);
    cout << "\n";
    ordenarArreglo(6,num);
    cout << "\n";
    imprimirArreglo(6,num);
    return 0;
}