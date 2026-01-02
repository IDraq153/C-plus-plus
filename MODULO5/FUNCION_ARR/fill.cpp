#include <iostream>
using std::cout;
using std::cin;
using string_t = std::string;

int main() {
    //rellena valores con algo de esta forma
    //fill(inicio, fin, valor);
    const int tam = 5;
    string_t comidas[tam];
    fill(comidas, comidas + tam/2, "chaufa");
    fill(comidas + tam/2, comidas + tam, "pollo");

    for(string_t i : comidas) { cout << i << " "; }

    return 0;
}