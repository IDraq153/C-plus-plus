#include <iostream>
using std::cout;
using std::cin;

int main() {

    //LLENANDO LA MATRIZ
    int matriz[3][3];
    int num = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            num++;
            cout << "Ingrese numero " << num << ": ";
            cin >> matriz[i][j];
        }        
    }

    //MOSTRANDO LA MATRIZ
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}