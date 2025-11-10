#include <iostream>
using std::cout;

int main() {
    int x = 10;
    int* p = &x; //p apunta hacia la direccion de x
    cout << *p << std::endl;

    *p = 25; //cambia lo que esta en esa direccion osea x a 25
    cout << x << std::endl;

    //PUNTERO a CHAR
    char letra = 'A';
    char* ptr = &letra;
    cout << *ptr << std::endl;

    //PUNTERO y ARREGLOS
    int nums[] = {5,10,15};
    int* ptr2 = nums; //Es el puntero predeterminado 
    cout << *(ptr2 + 1) << std::endl; 

    return 0;
}