#include <iostream> 

int main() {    
    //VALOR NULO ALGO QUE NO TIENE VALOR
    //nullptr = Esta es la palabra clave de un puntero nulo
    int *puntero = nullptr;
    int x = 123;

    puntero = &x;

    std::cout << *puntero;
    return 0;
}