#include <iostream>
using string_t = std::string;
using std::cout;

int main() {
    string_t nombre = "dario";
    string_t pizzas[3] = {"pizza_1", "pizza_2", "pizza_3"};
    int edad = 19;

    string_t *pNombre = &nombre;
    //EN ARREGLOS PASA EL PRIMER ELEMENTO
    string_t *pPizzas = pizzas;
    int *pEdad = &edad;

    cout << *pNombre << '\n';
    cout << *pEdad << '\n';
    cout << *pPizzas << '\n';
    return 0;
}