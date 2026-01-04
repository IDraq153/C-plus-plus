#include <iostream>
using std::cout;
using std::cin;
using string_t = std::string;


int main() {
    char *pNotas = nullptr;
    int tam;

    cout << "Cuantas notas: ";
    cin >> tam;

    pNotas = new char[tam];
    for (int i = 0; i < tam; i++) {
        cout << "Ingrese la nota #" << i + 1 << ": ";
        cin >> pNotas[i];
    }
    cout << "Notas" << std::endl;
    for (int i = 0; i < tam; i++) {
        cout << " " << pNotas[i] << " ";
    }        

    delete[] pNotas;

    return 0;
}