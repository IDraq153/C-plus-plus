#include <iostream>
using std::cout;
using std::cin;

void generarPiramide(int n);

int main() {
    int n; 
    cout << "---GENERANDO PIRAMIDES--- \n";
    cout << "---DE CUANTAS FILAS: ";
    cin >> n; 
    cout << std::endl;
    generarPiramide(n);
    return 0;
}

void generarPiramide(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << " # ";
        }        
        for (int j = 0; j <= i; j++) {
            cout << " # ";
        }        
        cout << "\n";        
    }
}