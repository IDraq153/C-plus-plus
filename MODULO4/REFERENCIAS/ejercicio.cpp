#include <iostream>
using std::cout;

//INTERCAMBIO USANDO REFERENCIAS
void intercambio(int& num1, int& num2) {
    int temp = 0;
    temp = num1;
    num1 = num2;
    num2 = temp;
}

//POR REFERENCIA CONVIERTO A UN NUMERO NEGATIVO SI ES POSITIVO
void negar(int& num) {
    if (num >= 0) {
        num = -num;
    }    
} 

//MULTIPLICAR LO ALMACENA EN VARIABLE REFERENCIADA
void multiplique(int& num, int a, int b) {
    num = a*b;
}

int main() {
    int num1 = 5;
    int num2 = 10;
    intercambio(num1,num2);
    cout << num1 << " \n " << num2 << std::endl;

    int num3 = 10;
    negar(num3);
    cout << num3 << std::endl;

    int resultado;
    multiplique(resultado,5,5);
    cout << resultado << std::endl;
    return 0;
}