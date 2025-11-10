#include <iostream>
using std::cout;

//REFERENCIA es un alias para una variable
//Esta no puede cambiar de objetivo se debe iniciar desde que se declara
//Para cambiar una variable de una posicion sin usar punteros
//Es cuando no queremos retornar cosas al igual que los punteros
void incrementar(int& num) {
    num++;
}

void cambioSigno(int& c) {
    c = -c;
}

int main() {
    int x = 10;
    int& ref = x; 
    ref = 20; //modificamos el valor de x desde ref
    cout << x << std::endl;
    
    int valor = 5;
    incrementar(valor);
    cout << valor << std::endl;

    int a = 1;
    cambioSigno(a);
    cout << a << std::endl;
    return 0;
}