#include <iostream>
using std::cout;
using std::cin;
using string_t = std::string;

int factorial(int n);
//EL CODIGO TIENDE A SER MAS FACIL DE ENTENDER
//SE UTILIZA MAS MEMORIA MAS TIEMPO DE PROCESAMIENTO
int main() {
    int n = 0;
    cout << "Ingrese !n: ";
    cin >> n;

    int numero;
    numero = factorial(n);
    cout << "\nTu numero: "<< numero;
    return 0;
}

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}