#include <iostream>
using std::cout;

void ordenarArreglo(int* ref) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            int* actual = ref + j;
            int* siguiente = ref + j + 1;
            if (*actual < *siguiente) {
                int temp = *siguiente;
                *siguiente = *actual;
                *actual = temp;
            }            
        }        
    }    
}

void verInfo(int* ref) {
    for (int i = 0; i < 5; i++) {
        cout << *(ref + i) << " ";
    }    
}

int main() {
    cout << "Ordenando un Arreglo" << std::endl;
    int arreglo[] = {1,2,3,4,5};
    ordenarArreglo(arreglo);
    verInfo(arreglo);
    return 0;
}