#include <iostream>
using std::cout;

double obtenerTotal(double precios[], int tam);

//SE ESTA PASANDO UN PUNTERO
int main() {
    double precios[] = {52.2, 14.54, 42.32};
    int tam = sizeof(precios)/sizeof(double);
    double total = obtenerTotal(precios, tam);

    cout << '$' << total;
    return 0;
}

double obtenerTotal(double precios[], int tam) {
    double total = 0;

    for (int i = 0; i < tam ; i++) {
        total += precios[i];
    }       
    return total;
}